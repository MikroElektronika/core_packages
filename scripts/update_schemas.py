import os, time, aiofiles, filecmp, \
       argparse, aiohttp, requests, \
       asyncio, support as support, \
       shutil, subprocess

from elasticsearch import Elasticsearch
from schemas import GenerateSchemas

def compress_directory_7z(base_output_dir, entry_name, arch=None):
    """
    Compresses the given directory into a 7z archive using the 7z command line tool.

    Args:
    source_dir (str): Path to the directory to be compressed.
    output_file (str): Path where the output .7z file should be saved.

    Returns:
    bool: True if compression was successful, False otherwise.
    """
    # Construct the command to compress the directory
    command = [
        '7z', 'a',  # 'a' stands for adding to an archive
        '-t7z',     # Specify 7z archive type
        '-mx3',
        '-mtc=off'  # Do not store timestamps
    ]

    # Check if the source directory exists
    if arch:
        archive_name = base_output_dir + ".7z"
    else:
        archive_name = os.path.join(os.path.dirname(base_output_dir), entry_name)

    command.append(archive_name) # Path to the output .7z file
    command.append(os.path.join(base_output_dir, '*'))  # Path to the source directory content

    if not os.path.isdir(base_output_dir):
        print(f"The specified directory does not exist: {base_output_dir}")
        return False

    # Execute the command
    try:
        subprocess.run(command, check=True)
        print(f"Archive created successfully: {archive_name}")
        return archive_name
    except subprocess.CalledProcessError as e:
        print(f"An error occurred while creating the archive: {e}")
        return None

def increment_version(version):
    major, minor, patch = map(int, version.split('.'))
    return f"{major}.{minor}.{patch + 1}"

def is_version_changed(old_file, new_file, version_current):
    if not version_current:
        return True, 'v1.0.0' ## If not indexed, set to 1.0.0
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
    response.close()
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

def index_schemas(es: Elasticsearch, release_details, version, index_name, test_version=''):
    doc = None
    for asset in release_details.get('assets', []):
        if asset['name'] == f'schemas{test_version}.json':
            doc = {
                'name': f"schemas{test_version}",
                'display_name': f"Schemas{test_version} file",
                'author': "MIKROE",
                'hidden': True,
                'type': "mcu_schemas",
                'version': version,
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed': True,
                'install_location': f"%APPLICATION_DATA_DIR%/schemas{test_version}.json"
            }
            break

    if doc:
        resp = es.index(index=index_name, doc_type='necto_package', id=f'schemas{test_version}', body=doc)
        print(f"{resp['result']} {resp['_id']}")

        # Special case - update live index Elasticsearch base as well
        if 'ES_INDEX_TEST' in os.environ and 'ES_INDEX_LIVE' in os.environ:
            if index_name == os.environ['ES_INDEX_TEST']:
                resp = es.index(index=os.environ['ES_INDEX_LIVE'], doc_type='necto_package', id=f'schemas{test_version}', body=doc)
                print(f"{resp['result']} {resp['_id']}")

async def upload_asset(session, token, repo, tag_name, asset_path):
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

async def package_and_upload_schemas(es: Elasticsearch, index_name, token, repo, tag_name, release_details, test_version=''):
    global new_version
    input_directory = "./"
    output_file = f"./output/docs/schemas{test_version}.json"
    output_file_full = f"./output/docs/schemas{test_version}_uncompressed.json"

    # Generate schemas.json
    schemaGenerator = GenerateSchemas(input_directory, output_file, ['board_regex'])
    schemaGenerator.generate()

    # Ensure the directory exists before downloading the file
    output_dir = os.path.join(os.getcwd(), 'output/docs/')
    os.makedirs(output_dir, exist_ok=True)

    docs_asset, current_asset = None, None
    for asset in release_details.get('assets', []):
        if asset['name'] == f'docs{test_version}.7z':
            docs_asset = asset
        if asset['name'] == f'schemas{test_version}.json':
            current_asset = asset
            try:
                # Download the current schemas.json
                support.download_file_from_link(asset['url'], os.path.join(output_dir, 'current_schemas.json'), token)
            except Exception as e:
                raise ValueError(f"Failed to download current_schemas.json: {e}")
        if docs_asset and current_asset:
            break

    current_schemas_path = os.path.join(output_dir, 'current_schemas.json')

    # Check if the file exists before proceeding with comparison
    if not os.path.exists(current_schemas_path):
        raise FileNotFoundError(f"current_schemas.json was not downloaded to {current_schemas_path}")

    # Compare the current file and the new file
    changed, version = is_version_changed(
        current_schemas_path,
        output_file,
        fetch_current_indexed_version(es, index_name, f'schemas{test_version}')
    )

    if changed or not current_asset:
        if current_asset:
            print(f"Deleting existing asset: {current_asset['name']}")
            delete_response = requests.delete(current_asset['url'], headers=get_headers(True, token))
            delete_response.raise_for_status()
            print(f"Asset deleted: {current_asset['name']}")

        async with aiohttp.ClientSession() as session:
            upload_result = await upload_asset(session, token, repo, tag_name, output_file)

        if upload_result['state'] == 'uploaded':
            # Download the current schemas.json
            tmp_output_dir = os.path.join(os.getcwd(), 'output')
            if docs_asset:
                support.extract_archive_from_url(docs_asset['url'], os.path.join(tmp_output_dir, 'tmp_docs'), token)
            os.makedirs(os.path.join(tmp_output_dir, 'tmp_docs'), exist_ok=True)
            shutil.copyfile(output_file, os.path.join(tmp_output_dir, 'tmp_docs', os.path.basename(output_file)))
            shutil.copyfile(output_file_full, os.path.join(tmp_output_dir, 'tmp_docs', os.path.basename(output_file_full)))
            archive_path = compress_directory_7z(os.path.join('./output', 'tmp_docs'), f'docs{test_version}.7z')
            if docs_asset:
                print(f"Deleting existing asset: {docs_asset['name']}")
                delete_response = requests.delete(docs_asset['url'], headers=get_headers(True, token))
                delete_response.raise_for_status()
                print(f"Asset deleted: {docs_asset['name']}")
            async with aiohttp.ClientSession() as session:
                upload_result = await upload_asset(session, token, repo, tag_name, archive_path)
            return version
    else:
        print("No changes detected. Skipping upload.")
        return None

if __name__ == '__main__':
    # First, check for arguments passed
    def str2bool(v):
        if isinstance(v, bool):
            return v
        if v.lower() in ('yes', 'true', 't', 'y', '1'):
            return True
        elif v.lower() in ('no', 'false', 'f', 'n', '0'):
            return False
        else:
            raise argparse.ArgumentTypeError('Boolean value expected.')

    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("release_version", help="Selected release version to index to current database", type=str)
    parser.add_argument("select_index", help="Provided index name")
    parser.add_argument("test_version", help="Generates test version files for testing first", type=str2bool, default=False)
    args = parser.parse_args()

    test_version = ''
    # Test version if needed for debugging purposes
    if args.test_version:
        print("Running test version!")
        test_version = '_test'
    else:
        print("Running live version!")

    print("Starting the process...")
    es = initialize_es()
    release_details = fetch_release_details(args.repo, args.token, args.release_version)
    new_version = asyncio.run(package_and_upload_schemas(es, args.select_index, args.token, args.repo, args.release_version, release_details, test_version))

    if new_version:
        release_details = fetch_release_details(args.repo, args.token, args.release_version)
        index_schemas(es, release_details, new_version, args.select_index, test_version)
        print(f"File has been updated. Version increased to {new_version}.")
    else:
        print("File the same. No need to update.")
