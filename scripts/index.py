import os, re, time, argparse, requests, hashlib, shutil
from elasticsearch import Elasticsearch
from pathlib import Path
from datetime import datetime, timezone

import support as support
import read_microchip_index as MCHP

# Gets latest release headers from repository
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

# Function to fetch release details from GitHub
def fetch_release_details(repo, token, release_version):
    api_headers = get_headers(True, token)
    url = f'https://api.github.com/repos/{repo}/releases'
    response = requests.get(url, headers=api_headers)
    response.raise_for_status()  # Raise an exception for HTTP errors
    if "latest" == release_version:
        return support.get_latest_release(response.json()), support.get_previous_release(response.json(), True)
    else:
        release_check = None
        release_check = support.get_specified_release(response.json(), release_version)
        if release_check:
            return release_check, support.get_previous_release(response.json(), True)
        else:
            ## Always fallback to latest release
            print("WARNING: Falling back to LATEST release.")
            return support.get_latest_release(response.json()), support.get_previous_release(response.json(), True)

# Function to fetch content as JSON from the link
def fetch_json_data(download_link, token):
    """
    Fetches JSON data from the specified URL using an authorization token and returns it as a dictionary.

    Args:
        download_link (str): URL from which to fetch the JSON data.

    Returns:
        tuple: The first element is a dictionary containing the JSON data (or None in case of failure),
                the second element is an error message or None if no errors occurred.
    """
    headers = get_headers(False, token)

    try:
        response = requests.get(download_link, headers=headers)
        response.raise_for_status()
        return response.json(), None
    except requests.RequestException as e:
        print(f"Error fetching JSON data: {e}")
        return None, str(e)

# Function to find an item by name
def find_item_by_name(items, name):
    for item in items:
        if item['name'] == name:
            return item
    return None

def remove_duplicate_indexed_files(es : Elasticsearch, index_name):
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

    checkDict = {}
    db_version = None
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue ## TODO - Check newly created bare metal package (is it created correctly)
        name = eachHit['_source']['name']
        if name == 'database':
            db_version = eachHit['_source']['version']
        type = eachHit['_type']
        id = eachHit['_id']
        if eachHit['_source']['type'] in typeCheck:
            if name in checkDict:
                checkDict[name]['count'] += 1
                checkDict[name]['id'].append([id, type])
            else:
                checkDict.update({name: { 'count': 1, 'id': [[id, type]]}})

    # Proceed to remove all found IDs
    for eachPackageName in checkDict.keys():
        if checkDict[eachPackageName]['count'] > 1:
            for eachId in checkDict[eachPackageName]['id']:
                print("Removed %s/%s" % (eachId[1], eachId[0]))
                response = es.delete(index=index_name, id=eachId[0], doc_type=eachId[1])

    return db_version

def increase_version(version, part="patch"):
    # Split the version string into major, minor, and patch
    major, minor, patch = map(int, version.split('.'))

    # Increase the selected part
    if part == "major":
        major += 1
        minor = 0  # Reset minor and patch when major increases
        patch = 0
    elif part == "minor":
        minor += 1
        patch = 0  # Reset patch when minor increases
    elif part == "patch":
        patch += 1

    # Return the new version string
    return f"{major}.{minor}.{patch}"

def hash_file(filename):
    """Generate MD5 hash of a file."""
    hash_md5 = hashlib.md5()
    with open(filename, "rb") as f:
        for chunk in iter(lambda: f.read(4096), b""):
            hash_md5.update(chunk)
    return hash_md5.hexdigest()

def hash_directory_contents(directory):
    """Generate a hash for the contents of a directory."""
    all_hashes = []
    for root, dirs, files in os.walk(directory):
        dirs.sort()  # Ensure directory traversal is in a consistent order
        files.sort()  # Ensure file traversal is in a consistent order
        for filename in files:
            file_path = os.path.join(root, filename)
            file_hash = hash_file(file_path)
            all_hashes.append(file_hash)

    # Combine all file hashes into one hash
    combined_hash = hashlib.md5("".join(all_hashes).encode()).hexdigest()
    return combined_hash

def increment_version(version):
    major, minor, patch = map(int, version.split('.'))
    return f"{major}.{minor}.{patch + 1}"

def check_version_and_hash(es: Elasticsearch, index_name, url, token, asset, is_file=False):
# Search query to use
    query_search = {
        "size": 5000,
        "query": {
            "match_all": {}
        }
    }

    search_es_name = asset
    if asset.endswith('_dev'):
        search_es_name = asset[:-4]

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

    index_hash = None
    indexed_version = None
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue ## TODO - Check newly created bare metal package (is it created correctly)
        name = eachHit['_source']['name']
        if name == search_es_name:
            if 'hash' in eachHit['_source']:
                index_hash = eachHit['_source']['hash']
            if 'version' in eachHit['_source']:
                indexed_version = eachHit['_source']['version']

    os.makedirs(os.path.join(os.getcwd(), 'output/tmp', asset), exist_ok=True)
    if is_file:
        support.download_file_from_link(url, os.path.join(os.getcwd(), 'output/tmp', asset, f'{asset}.json'), token)
    else:
        support.extract_archive_from_url(url, os.path.join(os.getcwd(), 'output/tmp', asset), token)
    uploaded_asset_hash = hash_directory_contents(os.path.join(os.getcwd(), 'output/tmp', asset))
    shutil.rmtree(os.path.join(os.getcwd(), 'output/tmp', asset))

    new_version = indexed_version
    if not new_version:
        existed = False
        index_hash = uploaded_asset_hash

    if new_version:
        existed = True
        if (uploaded_asset_hash != index_hash):
            if indexed_version.startswith('v'):
                new_version = f'v{increment_version(indexed_version[1:])}'
            else:
                new_version = increment_version(indexed_version)
    else:
        new_version = '1.0.0'

    return uploaded_asset_hash, index_hash, (uploaded_asset_hash != index_hash), new_version, existed, indexed_version

# Function to index release details into Elasticsearch
def index_release_to_elasticsearch(es : Elasticsearch, index_name, release_details, token, force, update_database=False, db_version=None):
    # Iterate over each asset in the release and previous release
    metadata_content = []
    for each_release_details in release_details:
        if each_release_details:  ## TODO - hotfix for test index - check this
            metadata_asset = next((a for a in each_release_details['assets'] if a['name'] == "metadata.json"), None)
            metadata_download_url = metadata_asset['url']
            metadata_content.append(fetch_json_data(metadata_download_url, token)[0])

    # Fetch documentation regarding latest release
    docs_path = os.path.join(str(Path(__file__).parent.parent.absolute()), 'output/docs')
    docs_asset = next((a for a in release_details[0]['assets'] if a['name'] == "docs.7z"), None)
    support.extract_archive_from_url(docs_asset['url'], docs_path, token)
    mcu_check_list = support.fetch_package_mcus(docs_path)

    # Get the current time in UTC
    current_time = datetime.now(timezone.utc).replace(microsecond=0)
    # If you specifically want the 'Z' at the end instead of the offset
    published_at = current_time.isoformat().replace('+00:00', 'Z')

    for asset in release_details[0].get('assets', []):
        # Do not index metadata or docs
        if asset['name'] == 'metadata.json' or asset['name'] == 'docs.7z':
            continue

        update_package = True
        name_without_extension = os.path.splitext(os.path.basename(asset['name']))[0]

        always_index = [
            'clocks',
            'schemas',
            'images',
            'preinit',
            'database',
            'database_dev'
        ]

        if update_database:
            if name_without_extension not in always_index:
                continue

        doc = None
        if name_without_extension == "clocks":
            current_hash, index_hash, check_version, new_version, existed, previous_version = check_version_and_hash(es, index_name, asset['url'], token, 'clocks', True)
            doc = {
                'name': "clocks",
                'display_name' : "Clocks file",
                'author' : "MIKROE",
                'hidden' : True,
                'type' : "mcu_clocks",
                'hash' : current_hash,
                'version' : new_version,
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed' : check_version,
                'install_location' : "%APPLICATION_DATA_DIR%/clocks.json",
                'gh_package_name': "clocks.json"
            }
        elif "schemas" in name_without_extension:
            current_hash, index_hash, check_version, new_version, existed, previous_version = check_version_and_hash(es, index_name, asset['url'], token, 'schemas', True)
            suffix = ''
            if 'test' in name_without_extension:
                suffix = '_test'
            doc = {
                'name': f"schemas{suffix}",
                'display_name' : f"schemas{suffix} file",
                'author' : "MIKROE",
                'hidden' : True,
                'type' : "mcu_schemas",
                'hash' : current_hash,
                'version' : new_version,
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed' : check_version,
                'install_location' : f"%APPLICATION_DATA_DIR%/schemas{suffix}.json",
                'gh_package_name': f"schemas{suffix}.json"
            }
        else:
            metadata_item = find_item_by_name(metadata_content[0], name_without_extension)
            if len(metadata_content) > 1:
                previous_metadata_item = find_item_by_name(metadata_content[1], name_without_extension)
            else:
                previous_metadata_item = find_item_by_name(metadata_content[0], name_without_extension)

            if metadata_item:
                if previous_metadata_item:
                    update_package = metadata_item['hash'] != previous_metadata_item['hash']
                else:
                    update_package = True

                package_name = name_without_extension
                if 'database' in name_without_extension:
                    package_name = 'database'
                    if ('dev' in name_without_extension) and ('test' in index_name):
                       print("Database test version.")
                    elif ('dev' not in name_without_extension) and ('live' in index_name):
                       print("Database live version.")
                    else:
                        continue

                current_hash, index_hash, check_version, new_version, existed, previous_version = check_version_and_hash(es, index_name, asset['url'], token, name_without_extension)

                current_version = metadata_item['version']
                if index_hash and current_hash:
                    if not existed:
                        update_package = True
                    else:
                        if current_hash == index_hash:
                            update_package = False
                        else:
                            update_package = True
                            current_version = new_version

                doc = {
                    'name': package_name,
                    'display_name' : metadata_item['display_name'],
                    'author' : "MIKROE",
                    'hidden' : metadata_item['hidden'],
                    'type' : metadata_item['type'],
                    'version' : current_version,
                    'created_at': asset['created_at'],
                    'updated_at': asset['updated_at'],
                    'published_at': published_at,
                    'hash': current_hash,
                    'category': metadata_item['category'],
                    'download_link': asset['url'],
                    'package_changed' : update_package or force,
                    'install_location' : metadata_item['install_location'],
                    'gh_package_name': os.path.splitext(os.path.basename(asset['name']))[0]
                }
                if metadata_item['type'] == 'mcu':
                    doc.update(
                        {
                            'dependencies': [
                                'preinit',
                                'unit_test_lib',
                                'mikroe_utils_common'
                            ],
                            'mcus': support.fetch_mcu_list(
                                name_without_extension,
                                mcu_check_list
                            )
                        }
                    )

        # Update the database version
        if 'package_name' in locals():
            if ('database' == package_name):
                if doc:
                    doc['version'] = increase_version(db_version, part="patch")

        # Index the document
        if doc:
            if re.search(r'^.+\.(json|7z)$', asset['name']) and (update_package or force or (name_without_extension in always_index)):
                if update_database:
                    if name_without_extension in always_index:
                        resp = es.index(index=index_name, doc_type='necto_package', id=name_without_extension, body=doc)
                        print(f"{resp["result"]} {resp['_id']}")
                else:
                    resp = es.index(index=index_name, doc_type='necto_package', id=name_without_extension, body=doc)
                    print(f"{resp["result"]} {resp['_id']}")
                    # Database is indexed as separate ID for both indexes, so skip it in this step
                    if (name_without_extension in always_index) and ('database' not in name_without_extension):
                        if ('ES_INDEX_TEST' in os.environ) and ('ES_INDEX_LIVE' in os.environ):
                            if index_name == os.environ['ES_INDEX_TEST']:
                                resp = es.index(index=os.environ['ES_INDEX_LIVE'], doc_type='necto_package', id=name_without_extension, body=doc)
                                print(f"Indexed to LIVE as well.")
                                print(f"{resp["result"]} {resp['_id']}")

            # Print new version after indexing
            if previous_version != doc['vesion']:
                print(f"\033[95mVersion for asset {name_without_extension} has been updated from {previous_version} to {doc['vesion']}\033[0m")

def is_release_latest(repo, token, release_version):
    api_headers = get_headers(True, token)
    url = f'https://api.github.com/repos/{repo}/releases'
    response = requests.get(url, headers=api_headers)
    response.raise_for_status()  # Raise an exception for HTTP errors
    latest_release = support.get_latest_release(response.json())
    if 'latest' == release_version:
        return None, True
    else:
        return response.json(), release_version == latest_release['tag_name']

def promote_to_latest(releases, repo, token, release_version):
    # Headers for authentication
    headers = {
        "Authorization": f"token {token}",
        "Accept": "application/vnd.github+json"
    }

    # Step 1: Update the prerelease version and set it as not prerelease
    selected_release = support.get_specified_release(releases, release_version=release_version)
    if selected_release['prerelease']:
        data_selected_release = {
            "tag_name": selected_release['tag_name'],
            "name": selected_release['name'],
            "body": selected_release['body'],
            "draft": False,
            "prerelease": False
        }

        response_1 = requests.patch(
            f"https://api.github.com/repos/{repo}/releases/{selected_release['id']}",
            headers=headers,
            json=data_selected_release
        )

    if not response_1.ok:
        raise Exception(f"Failed to update release {selected_release['name']}: {response_1.status_code} - {response_1.text}")

    # Step 2: Set the current latest release to prerelease
    latest_release = support.get_latest_release(releases)
    data_latest_release = {
        "prerelease": True
    }

    response_2 = requests.patch(
        f"https://api.github.com/repos/{repo}/releases/{latest_release['id']}",
        headers=headers,
        json=data_latest_release
    )

    if not response_2.ok:
        raise Exception(f"Failed to demote release {selected_release['name']}: {response_2.status_code} - {response_2.text}")

    # Step 3: Change the state of the current latest release back to not prerelease
    data_latest_release['prerelease'] = False
    response_3 = requests.patch(
        f"https://api.github.com/repos/{repo}/releases/{latest_release['id']}",
        headers=headers,
        json=data_latest_release
    )

    if not response_3.ok:
        raise Exception(f"Failed to revert status for release {selected_release['name']}: {response_3.status_code} - {response_3.text}")

    return

def index_microchip_packs(es: Elasticsearch, index_name: str):
    custom_link = 'https://packs.download.microchip.com/index.idx'
    # Download the index file
    xml_content = MCHP.download_index_file(custom_link)
    converted_data, item_list = MCHP.convert_idx_to_json(xml_content)
    for eachItem in item_list:
        resp = es.index(index=index_name, doc_type='necto_package', id=eachItem['name'], body=eachItem)
        print(f"{resp["result"]} {resp['_id']}")

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

    # Get arguments
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("select_index", help="Provided index name")
    parser.add_argument("force_index", help="If true will update packages even if hash is the same", type=str2bool)
    parser.add_argument("release_version", help="Selected release version to index to current database", type=str)
    parser.add_argument("update_database", help="If true will update database.7z", type=str2bool)
    parser.add_argument("promote_release_to_latest", help="Sets current release as latest", type=str2bool, default=False)
    args = parser.parse_args()

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

    # Remove any previous multiple indexes, if any
    db_version = remove_duplicate_indexed_files(
        es, args.select_index
    )

    # Index microchip device family packs
    if 'live' not in args.select_index:
        # TODO - uncomment once LIVE test is confirmed to work
        index_microchip_packs(es, args.select_index)

    # Now index the new release
    index_release_to_elasticsearch(
        es, args.select_index,
        fetch_release_details(args.repo, args.token, args.release_version),
        args.token, args.force_index,
        args.update_database,
        db_version
    )

    # And then promote to latest if requested
    if (args.promote_release_to_latest):
        # If current release isn't latest already
        releases, is_latest = is_release_latest(args.repo, args.token, args.release_version)
        if (not is_latest):
            promote_to_latest(releases, args.repo, args.token, args.release_version)
