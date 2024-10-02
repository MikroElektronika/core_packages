import os, time, aiofiles, filecmp, \
       argparse, aiohttp, requests, \
       asyncio, support as support

from elasticsearch import Elasticsearch
from schemas import GenerateSchemas

def increment_version(version):
    major, minor, patch = map(int, version.split('.'))
    return f"{major}.{minor}.{patch + 1}"

def is_version_changed(old_file, new_file, version_current):
    if not filecmp.cmp(old_file, new_file, shallow=False):
        return True, f'v{increment_version(version_current[1:])}'
    return False, version_current

def get_headers(api, token):
    if api:
        return {
            'Authorization': f'token {token}'
        }
    else:
        return {
            'Authorization': f'Bearer {token}',
            'Accept': 'application/octet-stream'
        }

def fetch_release_details(repo, token, release_version):
    api_headers = get_headers(True, token)
    url = f'https://api.github.com/repos/{repo}/releases'
    response = requests.get(url, headers=api_headers)
    response.raise_for_status()  # Raise an exception for HTTP errors
    if "latest" == release_version:
        return support.get_latest_release(response.json())
    else:
        release_check = support.get_specified_release(response.json(), release_version)
        if release_check:
            return release_check
        else:
            # Always fallback to latest release
            print("WARNING: Falling back to LATEST release.")
            return support.get_latest_release(response.json())

def fetch_current_indexed_version(es: Elasticsearch, index_name, package_name):
    query_search = {
        "size": 5000,
        "query": {
            "match_all": {}
        }
    }

    # Search the base with provided query
    num_of_retries = 1
    while num_of_retries <= 10:
        try:
            response = es.search(index=index_name, body=query_search)
            if not response['timed_out']:
                break
        except:
            print(f"Executing search query - retry number {num_of_retries}")
        num_of_retries += 1

    for eachHit in response['hits']['hits']:
        if 'name' not in eachHit['_source']:
            continue
        name = eachHit['_source']['name']
        if name == package_name:
            if 'version' in eachHit['_source']:
                return eachHit['_source']['version']

    return None

def initialize_es():
    num_of_retries = 1
    while True:
        print(f"Trying to connect to ES. Connection retry: {num_of_retries}")
        es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
        if es.ping():
            break
        if num_of_retries == 10:
            raise ValueError("Connection to ES failed!")
        num_of_retries += 1
        time.sleep(30)

    return es

def index_schemas(es: Elasticsearch, release_details, version, index_name):
    doc = None
    for asset in release_details.get('assets', []):
        if asset['name'] == 'schemas.json':
            doc = {
                'name': "schemas",
                'display_name': "schemas file",
                'author': "MIKROE",
                'hidden': True,
                'type': "mcu_schemas",
                'version': version,
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed': True,
                'install_location': "%APPLICATION_DATA_DIR%/schemas.json"
            }
            break

    if doc:
        resp = es.index(index=index_name, doc_type='necto_package', id='schemas', body=doc)
        print(f"{resp['result']} {resp['_id']}")

        # Special case - update live index Elasticsearch base as well
        if 'ES_INDEX_TEST' in os.environ and 'ES_INDEX_LIVE' in os.environ:
            if index_name == os.environ['ES_INDEX_TEST']:
                resp = es.index(index=os.environ['ES_INDEX_LIVE'], doc_type='necto_package', id='schemas', body=doc)
                print(f"{resp['result']} {resp['_id']}")

async def upload_schemas(session, token, repo, tag_name, asset_path):
    """ Upload a release asset to GitHub asynchronously """
    print(f"Preparing to upload asset: {os.path.basename(asset_path)}...")
    headers = {
        'Authorization': f'token {token}',
        'Content-Type': 'application/octet-stream'
    }

    # Debugging: Print tag_name and release_url
    release_url = f"https://api.github.com/repos/{repo}/releases/tags/{tag_name}"
    print(f"Fetching release details for tag: {tag_name}")
    print(f"Release URL: {release_url}")

    async with session.get(release_url, headers=headers) as response:
        if response.status != 200:
            error_message = await response.text()
            raise ValueError(f"Failed to fetch release details. Status: {response.status}, Message: {error_message}")

        response_data = await response.json()

        # Ensure 'id' exists before proceeding
        if 'id' not in response_data:
            raise ValueError(f"Error: 'id' not found in release data. Response: {response_data}")

        release_id = response_data['id']

    # Construct the upload URL
    upload_url = f"https://uploads.github.com/repos/{repo}/releases/{release_id}/assets?name={os.path.basename(asset_path)}"

    async with aiofiles.open(asset_path, 'rb') as f:
        data = await f.read()

    async with session.post(upload_url, headers=headers, data=data) as response:
        if response.status != 201:  # GitHub returns 201 Created for successful uploads
            error_message = await response.text()
            raise ValueError(f"Failed to upload asset. Status: {response.status}, Message: {error_message}")

        result = await response.json()

    print(f"Upload completed for: {os.path.basename(asset_path)}.")
    return result

async def package_and_upload_schemas(es: Elasticsearch, index_name, token, repo, tag_name, release_details):
    input_directory = "./"
    output_file = "./output/docs/schemas.json"

    # Generate schemas.json
    schemaGenerator = GenerateSchemas(input_directory, output_file, ['board_regex'])
    schemaGenerator.generate()

    # Ensure the directory exists before downloading the file
    output_dir = os.path.join(os.getcwd(), 'output/docs/')
    os.makedirs(output_dir, exist_ok=True)

    current_asset = None
    for asset in release_details.get('assets', []):
        if asset['name'] == 'schemas.json':
            current_asset = asset
            try:
                # Download the current schemas.json
                support.download_file_from_link(asset['url'], os.path.join(output_dir, 'current_schemas.json'), token)
            except Exception as e:
                raise ValueError(f"Failed to download current_schemas.json: {e}")
            break

    current_schemas_path = os.path.join(output_dir, 'current_schemas.json')

    # Check if the file exists before proceeding with comparison
    if not os.path.exists(current_schemas_path):
        raise FileNotFoundError(f"current_schemas.json was not downloaded to {current_schemas_path}")

    # Compare the current file and the new file
    changed, version = is_version_changed(
        current_schemas_path,
        output_file,
        fetch_current_indexed_version(es, index_name, 'schemas')
    )

    if changed:
        if current_asset:
            print(f"Deleting existing asset: {current_asset['name']}")
            delete_response = requests.delete(current_asset['url'], headers=get_headers(True, token))
            delete_response.raise_for_status()
            print(f"Asset deleted: {current_asset['name']}")

        async with aiohttp.ClientSession() as session:
            upload_result = await upload_schemas(session, token, repo, tag_name, output_file)

        if upload_result['state'] == 'uploaded':
            return version
    else:
        print("No changes detected. Skipping upload.")
        return None

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("release_version", help="Selected release version to index to current database", type=str)
    parser.add_argument("select_index", help="Provided index name")
    args = parser.parse_args()

    print("Starting the process...")
    es = initialize_es()
    release_details = fetch_release_details(args.repo, args.token, args.release_version)
    new_version = asyncio.run(package_and_upload_schemas(es, args.select_index, args.token, args.repo, args.release_version, release_details))

    if new_version:
        time.sleep(10)
        release_details = fetch_release_details(args.repo, args.token, args.release_version)
        index_schemas(es, release_details, new_version, args.select_index)
        print(f"File has been updated. Version increased to {new_version}.")
    else:
        print("File the same. No need to update.")
