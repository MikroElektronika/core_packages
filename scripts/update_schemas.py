import os, time, aiofiles, filecmp, \
       argparse, aiohttp, asyncio, \
       requests, \
       support as support

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
        release_check = None
        release_check = support.get_specified_release(response.json(), release_version)
        if release_check:
            return release_check
        else:
            ## Always fallback to latest release
            print("WARNING: Falling back to LATEST release.")
            return support.get_latest_release(response.json())

def fetch_current_indexed_version(es : Elasticsearch, index_name, package_name):
    # Search query to use
    query_search = {
        "size": 5000,
        "query": {
            "match_all": {}
        }
    }
    # All package types to check for
    typeCheck = [
        'mcu',
        'preinit',
        'database',
        'mcu_clocks',
        'mcu_schemas',
        'unit_test_lib',
        'mikroe_utils_common'
    ]

    # Search the base with provided query
    num_of_retries = 1
    while num_of_retries <= 10:
        try:
            response = es.search(index=index_name, body=query_search)
            if not response['timed_out']:
                break
        except:
            print("Executing search query - retry number %i" % num_of_retries)
        num_of_retries += 1

    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue ## TODO - Check newly created bare metal package (is it created correctly)
        name = eachHit['_source']['name']
        if name == package_name:
            if 'version' in eachHit['_source']:
                return eachHit['_source']['version']

    return None

async def initialize_es():
    # Elasticsearch instance used for indexing
    num_of_retries = 1
    while True:
        print(f"Trying to connect to ES. Connection retry:  {num_of_retries}")
        es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
        if es.ping():
            break
        # Wait for 30 seconds and try again if connection fails
        if 10 == num_of_retries:
            # Exit if it fails 10 times, something is wrong with the server
            raise ValueError("Connection to ES failed!")
        num_of_retries += 1

        time.sleep(30)

    return es

async def upload_schemas(session, token, repo, tag_name, asset_path):
    """ Upload a release asset to GitHub """
    print(f"Preparing to upload asset: {os.path.basename(asset_path)}...")
    headers = {'Authorization': f'token {token}', 'Content-Type': 'application/octet-stream'}
    release_url = f"https://api.github.com/repos/{repo}/releases/tags/{tag_name}"
    async with session.get(release_url, headers=headers) as response:
        response_data = await response.json()
        release_id = response_data['id']
    upload_url = f"https://uploads.github.com/repos/{repo}/releases/{release_id}/assets?name={os.path.basename(asset_path)}"
    async with aiofiles.open(asset_path, 'rb') as f:
        data = await f.read()
    async with session.post(upload_url, headers=headers, data=data) as response:
        result = await response.json()
    print(f"Upload completed for: {os.path.basename(asset_path)}.")
    return result

async def index_schemas(es: Elasticsearch, release_details, version, index_name):
    doc = None
    for asset in release_details.get('assets', []):
        if asset['name'] == 'schemas.json':
            doc = {
                'name': "schemas",
                'display_name' : "schemas file",
                'author' : "MIKROE",
                'hidden' : True,
                'type' : "mcu_schemas",
                'version' : version,
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed' : True,
                'install_location' : "%APPLICATION_DATA_DIR%/schemas.json"
            }
            break

    if doc:
        resp = es.index(index=index_name, doc_type='necto_package', id='schemas', body=doc)
        print(f"{resp["result"]} {resp['_id']}")
        ## Special case - update live index elasticsearch base as well
        if ('ES_INDEX_TEST' in os.environ) and ('ES_INDEX_LIVE' in os.environ):
            if index_name == os.environ['ES_INDEX_TEST']:
                resp = es.index(index='github_live_index', doc_type='necto_package', id='schemas', body=doc)
                print(f"{resp["result"]} {resp['_id']}")

async def package_and_upload_schemas(es: Elasticsearch, index_name, token, repo, tag_name, release_details):
    # Generate schemas.json
    input_directory = "./"
    output_file = "./output/docs/schemas.json"
    # TODO - Add regex definitions to the array if needed
    # At the moment we check only for 'board_regex' fields in JSON files
    schemaGenerator = GenerateSchemas(input_directory, output_file, ['board_regex'])
    schemaGenerator.generate()
    for asset in release_details.get('assets', []):
        if asset['name'] == 'schemas.json':
            support.download_file_from_link(asset['url'], os.path.join(os.getcwd(), 'output/docs/current_schemas.json'), token)
            break
    changed, version = is_version_changed(
        os.path.join(os.getcwd(), 'output/docs/current_schemas.json'),
        os.path.join(os.getcwd(), 'output/docs/schemas.json'),
        fetch_current_indexed_version(
            es, index_name, 'schemas'
        )
    )
    if changed:
        # First, remove previous one
        print(f'Deleting existing asset: {asset['name']}')
        delete_response = requests.delete(asset['url'], headers=get_headers(True, token))
        delete_response.raise_for_status()
        print(f'Asset deleted: {asset['name']}')
        # Then, upload new one
        async with aiohttp.ClientSession() as session:
            upload_result = await upload_schemas(session, token, repo, tag_name, output_file)
        if upload_result['state'] == 'uploaded':
            return version
    else:
        return None

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("release_version", help="Selected release version to index to current database", type=str)
    parser.add_argument("select_index", help="Provided index name")
    args = parser.parse_args()
    print("Starting the process...")
    es = asyncio.run(initialize_es())
    release_details = fetch_release_details(args.repo, args.token, args.release_version)
    new_version = asyncio.run(package_and_upload_schemas(es, args.select_index,  args.token, args.repo, args.release_version, release_details))
    if new_version:
        release_details = fetch_release_details(args.repo, args.token, args.release_version)
        asyncio.run(index_schemas(es, release_details, new_version, args.select_index))
        print("File has been updated. Version increased to %s." % new_version)
    else:
        print("File the same. No need to update.")
