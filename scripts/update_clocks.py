import os, requests, aiofiles, filecmp, time
import argparse, aiohttp, asyncio

from clocks import GenerateClocks
from elasticsearch import Elasticsearch
import support as support

def index_clocks(es: Elasticsearch, release_details, version):
    doc = None
    for asset in release_details.get('assets', []):
        if asset['name'] == f'clocks.json':
            doc = {
                'name': f"clocks",
                'display_name': f"clocks file",
                'author': "MIKROE",
                'hidden': True,
                'type': "mcu_clocks",
                'version': version,
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed': True,
                'install_location': f"%APPLICATION_DATA_DIR%/clocks.json"
            }
            break

    if doc:
        resp = es.index(index=os.environ['ES_INDEX_TEST'], doc_type=None, id=f'clocks', body=doc)
        print(f"{resp['result']} {resp['_id']}")

        resp = es.index(index=os.environ['ES_INDEX_LIVE'], doc_type=None, id=f'clocks', body=doc)
        print(f"{resp['result']} {resp['_id']}")

def increment_version(version):
    major, minor, patch = map(int, version.split('.'))
    return f"{major}.{minor}.{patch + 1}"

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
    print("Trying to connect to ES.")
    while True:
        es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
        if es.ping():
            break
        if num_of_retries == 10:
            raise ValueError("Connection to ES failed!")
        print(f"Connection retry: {num_of_retries}")
        num_of_retries += 1
        time.sleep(1)

    return es

async def upload_release_asset(session, token, repo, tag_name, asset_path, delete_existing=True):
    """ Upload a release asset to GitHub """
    print(f"Preparing to upload asset: {os.path.basename(asset_path)}...")
    headers = {'Authorization': f'token {token}', 'Content-Type': 'application/octet-stream'}

    release_url = f"https://api.github.com/repos/{repo}/releases/tags/{tag_name}"
    if 'latest' == tag_name:
        release_url = f"https://api.github.com/repos/{repo}/releases/latest"

    async with session.get(release_url, headers=headers) as response:
        response_data = await response.json()
        release_id = response_data['id']

    # Handle pagination to get all assets
    page = 1
    asset_deleted = False
    asset_name = os.path.basename(asset_path)
    while True:
        if asset_deleted:
            break
        url = f'https://api.github.com/repos/{repo}/releases/{release_id}/assets?page={page}&per_page=30'
        response = requests.get(url, headers=headers)
        response.raise_for_status()
        assets = response.json()

        # If no more assets, break out of loop
        if not assets:
            break

        # Check if the asset already exists
        for asset in assets:
            if asset['name'] == asset_name:
                # If the asset exists, delete it
                delete_url = asset['url']
                if delete_existing:
                    print(f'Deleting existing asset: {asset_name}')
                    delete_response = requests.delete(delete_url, headers=headers)
                    delete_response.raise_for_status()
                    print(f'Asset deleted: {asset_name}')
                asset_deleted = True
                break

        page += 1

    upload_url = f"https://uploads.github.com/repos/{repo}/releases/{release_id}/assets?name={os.path.basename(asset_path)}"
    async with aiofiles.open(asset_path, 'rb') as f:
        data = await f.read()
    async with session.post(upload_url, headers=headers, data=data) as response:
        result = await response.json()
    print(f"Upload completed for: {os.path.basename(asset_path)}.")
    return result

def is_version_changed(old_file, new_file, version_current):
    if not version_current:
        return True, 'v1.0.0' ## If not indexed, set to 1.0.0
    if not filecmp.cmp(old_file, new_file, shallow=False):
        return True, f'v{increment_version(version_current[1:])}'
    return False, version_current

async def upload_clocks(es: Elasticsearch, token, repo, tag_name, release_details):
    # Generate clocks.json
    input_directory = "./"
    output_dir = "./output/docs"
    output_file = os.path.join(output_dir, 'clocks.json')
    clocksGenerator = GenerateClocks(input_directory, output_file)
    clocksGenerator.generate()

    current_asset = None
    for asset in release_details.get('assets', []):
        if asset['name'] == 'clocks.json':
            current_asset = asset
            try:
                # Download the current clocks.json
                support.download_file_from_link(asset['url'], os.path.join(output_dir, 'current_clocks.json'), token)
            except Exception as e:
                raise ValueError(f"Failed to download current_clocks.json: {e}")
        if current_asset:
            break

    current_clocks_path = os.path.join(output_dir, 'current_clocks.json')

    # Check if the file exists before proceeding with comparison
    if not os.path.exists(current_clocks_path):
        raise FileNotFoundError(f"current_clocks.json was not downloaded to {current_clocks_path}")

    # Compare the current file and the new file
    changed, version = is_version_changed(
        current_clocks_path,
        output_file,
        fetch_current_indexed_version(es, os.environ['ES_INDEX_LIVE'], 'clocks')
    )

    if changed or not current_asset:
        if current_asset:
            print(f"Deleting existing asset: {current_asset['name']}")
            delete_response = requests.delete(current_asset['url'], headers=get_headers(True, token))
            delete_response.raise_for_status()
            print(f"Asset deleted: {current_asset['name']}")

        async with aiohttp.ClientSession() as session:
            upload_result = await upload_release_asset(session, token, repo, tag_name, output_file)

        if upload_result['state'] == 'uploaded':
            return version
        else:
            raise ValueError('clocks.json not uploaded!')
    else:
        print("No changes detected. Skipping upload.")
        return None

def main(token, repo, tag_name):
    es = initialize_es()
    release_details = fetch_release_details(args.repo, args.token, args.tag_name)

    # Upload new clocks asset if needed
    new_version = asyncio.run(upload_clocks(es, args.token, args.repo, args.tag_name, release_details))

    if new_version:
        release_details = fetch_release_details(args.repo, args.token, args.tag_name)
        index_clocks(es, release_details, new_version)
        print(f"File has been updated. Version increased to {new_version}.")
    else:
        print("File the same. No need to update.")

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("tag_name", help="Tag name from the release")
    args = parser.parse_args()
    print("Starting the upload process...")
    main(args.token, args.repo, args.tag_name)
    print("Upload process completed.")
