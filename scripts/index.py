import os, re, time, argparse, requests, hashlib, shutil, json
from elasticsearch import Elasticsearch
from pathlib import Path
from datetime import datetime, timezone

import support as support
import read_microchip_index as MCHP
import mattermost_message

from packaging.version import Version

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

def fetch_all_releases(repo, token, api_headers):
    api_headers = get_headers(True, token)
    url = f"https://api.github.com/repos/{repo}/releases"

    releases = []
    params = {
        "per_page": 100,
        "page": 1,
    }

    while True:
        response = requests.get(url, headers=api_headers, params=params)
        response.raise_for_status()

        page_releases = response.json()
        if not page_releases:
            break

        releases.extend(page_releases)

        if len(page_releases) < params["per_page"]:
            break

        params["page"] += 1

    return releases

# Function to fetch release details from GitHub
def fetch_release_details(repo, token, release_version):
    api_headers = get_headers(True, token)

    # Get all releases with pagination
    all_releases = fetch_all_releases(repo, token, api_headers)

    latest_release = support.get_latest_release(repo, api_headers)
    if "latest" == release_version:
        return latest_release, support.get_previous_release(latest_release, all_releases, True)
    else:
        release_check = None
        release_check = support.get_specified_release(all_releases, release_version)
        if release_check:
            return release_check, support.get_previous_release(latest_release, all_releases, True)
        else:
            ## Always fallback to latest release
            print("WARNING: Falling back to LATEST release.")
            return latest_release, support.get_previous_release(latest_release, all_releases, True)

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
        'mcu_clocks',
        'mcu_schemas'
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
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue
        name = eachHit['_source']['name']
        if '_type' in eachHit:
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
                response = es.delete(index=index_name, id=eachId[0], doc_type=None)


def resolve_publish_date(es: Elasticsearch, index_name, package_name):
    # Search query to use
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
            print("Executing search query - retry number %i" % num_of_retries)
        num_of_retries += 1

    index_publish_date = None
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue
        name = eachHit['_source']['name']
        if name == package_name:
            if 'published_at' in eachHit['_source']:
                return eachHit['_source']['published_at']
            else:
                # Notify user about failed package publish date fetching
                print("%sNo release date found for %s!" % (support.Colors.FAIL, package_name))
                return None

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

def fetch_current_indexed_packages(es : Elasticsearch, index_name):
    # Search query to use
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
            print("Executing search query - retry number %i" % num_of_retries)
        num_of_retries += 1

    all_packages = []
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue
        if '_type' in eachHit:
            if '_doc' == eachHit['_type']:
                all_packages.append(eachHit['_source'])

    # Sort all_packages alphabetically by the 'name' field
    all_packages.sort(key=lambda x: x['name'])

    return all_packages

def increment_version(version):
    major, minor, patch = map(int, version.split('.'))
    return f"{major}.{minor}.{patch + 1}"

def bump_version(version):
    ''' 1.0.3 -> 1.0.4, keeping a "v" prefix '''
    if version.startswith('v'):
        return f'v{increment_version(version[1:])}'
    return increment_version(version)

def plan_package_version(indexed_item, metadata_item, current_hash):
    ''' (new version, needs indexing) of an MCU package from its indexed document and metadata entry '''
    if not indexed_item or not indexed_item.get('version'):
        version = max(['1.0.0', metadata_item.get('version') or '1.0.0'], key=lambda t: Version(t.lstrip('v')))
        return version, True
    indexed_version = indexed_item['version']
    changed = current_hash != indexed_item.get('hash')
    version = bump_version(indexed_version) if changed else indexed_version
    # If version in metadata is bigger than calculated - pick the metadata asset version
    version = max([metadata_item.get('version') or version, version], key=lambda t: Version(t.lstrip('v')))
    return version, changed or version != indexed_version

def hash_release_file(asset, token):
    ''' Hash of a single-file release asset (clocks.json, schemas.json), as the packages hash folders '''
    folder = os.path.join(os.getcwd(), 'output/tmp', os.path.splitext(asset['name'])[0])
    os.makedirs(folder, exist_ok=True)
    support.download_file_from_link(asset['url'], os.path.join(folder, asset['name']), token)
    file_hash = hash_directory_contents(folder)
    shutil.rmtree(folder)
    return file_hash

def file_doc(asset, name, display_name, doc_type):
    return {
        'name': name,
        'display_name': display_name,
        'author': "MIKROE",
        'hidden': True,
        'type': doc_type,
        'created_at': asset['created_at'],
        'updated_at': asset['updated_at'],
        'category': "MCU Package",
        'download_link': asset['browser_download_url'],
        'download_link_api': asset['url'],
        'install_location': f"%APPLICATION_DATA_DIR%/{name}.json",
        'gh_package_name': f"{name}.json"
    }

def plan_release_indexing(index_name, indexed_items, metadata_content, releases_by_tag, release_tags, mcu_check_list, token, force, keep_previous_date, published_at):
    '''
    Documents of one index that need (re)indexing: [(doc id, doc, "NEW"/"UPDATE", previous version)].
    An MCU package is planned when it is not indexed yet, its hash differs from the indexed one or its
    version moved; clocks/schemas when the indexed document points to another upload of the file.
    Everything is planned with force; keep_previous_date re-plans indexed packages with their old dates.
    '''
    indexed_by_name = {item['name']: item for item in indexed_items}
    plan = []
    for release_tag in release_tags:
        release = releases_by_tag.get(release_tag)
        if not release:
            print(f'\033[93mRelease {release_tag} not found, skipped.\033[0m')
            continue
        for asset in release.get('assets', []):
            # Do not index metadata, docs or queries
            if asset['name'] in {'metadata.json', 'docs.7z', 'core_queries.7z'} or not re.search(r'^.+\.(json|7z)$', asset['name']):
                continue
            name = os.path.splitext(os.path.basename(asset['name']))[0]

            if name == 'clocks' or 'schemas' in name:
                doc_id = 'clocks' if name == 'clocks' else f"schemas{'_test' if 'test' in name else ''}"
                indexed = indexed_by_name.get(doc_id)
                same_upload = indexed and indexed.get('updated_at') == asset['updated_at'] and indexed.get('download_link') == asset['browser_download_url']
                if same_upload and not force and not keep_previous_date:
                    continue
                doc = file_doc(asset, doc_id, "Clocks file" if doc_id == 'clocks' else f"{doc_id} file", 'mcu_clocks' if doc_id == 'clocks' else 'mcu_schemas')
                doc['hash'] = hash_release_file(asset, token)
                previous_version = indexed.get('version') if indexed else None
                doc['version'] = previous_version if (same_upload or (indexed and indexed.get('hash') == doc['hash'])) and previous_version else (bump_version(previous_version) if previous_version else '1.0.0')
                doc['package_changed'] = not same_upload
                if keep_previous_date and indexed:
                    doc = {**indexed, 'hash': doc['hash']}
                plan.append((doc_id, doc, 'UPDATE' if indexed else 'NEW', previous_version))
                continue

            metadata_item = find_item_by_name(metadata_content[0], name)
            if not metadata_item:
                continue
            # A package is indexed from the release it was last uploaded to (older releases keep older copies)
            if metadata_item.get('release_tag') and metadata_item['release_tag'] != release_tag:
                continue
            indexed = indexed_by_name.get(name)
            current_hash = metadata_item['hash']
            version, needed = plan_package_version(indexed, metadata_item, current_hash)
            if not (needed or force or (keep_previous_date and indexed)):
                continue
            doc = {
                'name': name,
                'display_name': metadata_item['display_name'],
                'author': "MIKROE",
                'hidden': metadata_item['hidden'],
                'type': metadata_item['type'],
                'version': version,
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'published_at': published_at,
                'hash': current_hash,
                'category': metadata_item['category'],
                'download_link': asset['browser_download_url'],
                'download_link_api': asset['url'],
                'package_changed': needed or force,
                'install_location': metadata_item['install_location'],
                'gh_package_name': name
            }
            if metadata_item['type'] == 'mcu':
                doc.update({
                    'compilers': metadata_item['compilers'],
                    'dependencies': ['preinit', 'unit_test_lib', 'mikroe_utils_common'],
                    'mcus': support.fetch_mcu_list(name, mcu_check_list)
                })
            # If requested to keep previous date, only update the hash value
            if keep_previous_date and indexed:
                doc = {**indexed, 'hash': current_hash}
            plan.append((name, doc, 'UPDATE' if indexed else 'NEW', indexed.get('version') if indexed else None))
    return plan

# Function to index release details into Elasticsearch
def index_release_to_elasticsearch(es : Elasticsearch, index_names, release_details, token, repo, force, keep_previous_date=False, dry_run=False):
    '''
    Plans, for every index, the documents that changed and indexes only those. With dry_run nothing
    is indexed. Either way message.md (MATTERMOST_CORE_PACKAGES_INFO) lists the planned/indexed packages.
    '''
    # Metadata of the release (and of the previous one, when there is one)
    metadata_content = []
    for each_release_details in release_details:
        if each_release_details:
            metadata_asset = next((a for a in each_release_details['assets'] if a['name'] == "metadata.json"), None)
            if metadata_asset:
                metadata_content.append(fetch_json_data(metadata_asset['url'], token)[0])
    if not metadata_content or not isinstance(metadata_content[0], list):
        raise ValueError(f"metadata.json missing in {release_details[0]['name']}")

    # Fetch documentation regarding latest release
    docs_path = os.path.join(str(Path(__file__).parent.parent.absolute()), 'output/docs')
    docs_asset = next((a for a in release_details[0]['assets'] if a['name'] == "docs.7z"), None)
    support.extract_archive_from_url(docs_asset['url'], docs_path, token)
    mcu_check_list = support.fetch_package_mcus(docs_path)

    # Get the current time in UTC
    current_time = datetime.now(timezone.utc).replace(microsecond=0)
    published_at = current_time.isoformat().replace('+00:00', 'Z')

    # The general release plus every vendor release metadata.json points to, fetched once
    release_tags = [release_details[0]['tag_name']]
    for metadata_asset in metadata_content[0]:
        if 'release_tag' in metadata_asset and metadata_asset['release_tag'] not in release_tags:
            release_tags.append(metadata_asset['release_tag'])
    releases_by_tag = {release['tag_name']: release for release in fetch_all_releases(repo, token, None)}

    for index_name in index_names:
        indexed_items = fetch_current_indexed_packages(es, index_name)
        plan = plan_release_indexing(index_name, indexed_items, metadata_content, releases_by_tag, release_tags,
                                     mcu_check_list, token, force, keep_previous_date, published_at)
        label = mattermost_message.index_label(index_name)
        print(f'\033[94m{label}: {len(plan)} package(s) to index\033[0m')

        lines = []
        for doc_id, doc, status, previous_version in plan:
            if keep_previous_date and status == 'UPDATE':
                status = 'HASH'
            lines.append(mattermost_message.entry_line(status, doc.get('display_name') or doc_id, previous_version, doc.get('version')))
            if dry_run:
                print(f"[DRY RUN] {status} {doc_id} {previous_version or '-'} -> {doc.get('version')}")
                continue
            # Kibana v8 requires _type to be in body in order to have doc_type defined
            doc['_type'] = '_doc'
            resp = es.index(index=index_name, doc_type=None, id=doc_id, body=doc)
            print(f"{resp['result']} {resp['_id']}")
            if doc_id == 'clocks' or doc_id.startswith('schemas'):
                if ('ES_INDEX_TEST' in os.environ) and ('ES_INDEX_LIVE' in os.environ) and index_name == os.environ['ES_INDEX_TEST']:
                    resp = es.index(index=os.environ['ES_INDEX_LIVE'], doc_type=None, id=doc_id, body=doc)
                    print("Indexed to LIVE as well.")
                    print(f"{resp['result']} {resp['_id']}")
            if previous_version != doc.get('version'):
                print(f"\033[95mVersion for asset {doc_id} has been updated from {previous_version} to {doc.get('version')}\033[0m")

        mattermost_message.add_section(label, lines, dry_run=dry_run, release_tag=release_details[0]['tag_name'])


def is_release_latest(repo, token, release_version):
    api_headers = get_headers(True, token)

    # Get all releases with pagination
    all_releases = fetch_all_releases(repo, token, api_headers)
    latest_release = support.get_latest_release(repo, api_headers)
    if 'latest' == release_version:
        return None, True
    else:
        return all_releases, release_version == latest_release['tag_name']

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
    api_headers = get_headers(True, token)
    latest_release = support.get_latest_release(repo, api_headers)
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

def index_microchip_packs(es: Elasticsearch, index_name: str, dry_run=False):
    ''' Index the Microchip device family packs whose document changed; returns how many (would) change '''
    custom_link = 'https://packs.download.microchip.com/index.idx'
    # Download the index file
    xml_content = MCHP.download_index_file(custom_link)
    converted_data, item_list = MCHP.convert_idx_to_json(xml_content)
    indexed_by_name = {item['name']: item for item in fetch_current_indexed_packages(es, index_name)}
    changed = 0
    for eachItem in item_list:
        indexed = indexed_by_name.get(eachItem['name'])
        if indexed and {k: v for k, v in indexed.items() if k != '_type'} == {k: v for k, v in eachItem.items() if k != '_type'}:
            continue
        changed += 1
        if dry_run:
            continue
        # Kibana v8 requires _type to be in body in order to have doc_type defined
        eachItem['_type'] = '_doc'
        resp = es.index(index=index_name, doc_type=None, id=eachItem['name'], body=eachItem)
        print(f"{resp["result"]} {resp['_id']}")
    print(f"Microchip device family packs {'to index' if dry_run else 'indexed'}: {changed} of {len(item_list)}")
    return changed

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
    parser.add_argument("select_index", help="Provided index name (several divided by |)")
    parser.add_argument("force_index", help="If true will update packages even if hash is the same", type=str2bool)
    parser.add_argument("release_version", help="Selected Core release version to index", type=str)
    parser.add_argument("promote_release_to_latest", help="Sets current release as latest", type=str2bool, default=False)
    parser.add_argument("--es_host", help="Elasticsearch host value", default="")
    parser.add_argument("--es_user", help="Elasticsearch username value", default="")
    parser.add_argument("--es_password", help="Elasticsearch password value", default="")
    parser.add_argument("--keep_previous_dates", help="Repacks and uploads all packages with new copyright year, but keeps previous release dates.", type=str2bool, default=False)
    parser.add_argument("--dry_run", help="Only plan the indexing and write message.md for Mattermost", type=str2bool, default=False)
    args = parser.parse_args()

    # For local debug purposes
    if args.es_host and args.es_user and args.es_password:
        es_host = args.es_host
        es_user = args.es_user
        es_password = args.es_password
    else:
        es_host = os.environ['ES_HOST']
        es_user = os.environ['ES_USER']
        es_password = os.environ['ES_PASSWORD']

    # Elasticsearch instance used for indexing
    num_of_retries = 1
    print("Trying to connect to ES.")
    while True:
        es = Elasticsearch([es_host], http_auth=(es_user, es_password))
        if es.ping():
            break
        # Wait 1 second and try again if connection fails
        if 10 == num_of_retries:
            # Exit if it fails 10 times, something is wrong with the server
            raise ValueError("Connection to ES failed!")
        print(f"Connection retry: {num_of_retries}")
        num_of_retries += 1

        time.sleep(1)

    index_names = [name for name in args.select_index.split('|') if name]
    release_details = fetch_release_details(args.repo, args.token, args.release_version)

    microchip_packs = {}
    for index_name in index_names:
        # Remove any previous multiple indexes, if any
        if not args.dry_run:
            remove_duplicate_indexed_files(es, index_name)

        # Index microchip device family packs
        microchip_packs[index_name] = index_microchip_packs(es, index_name, args.dry_run)

    # Now index the new release
    index_release_to_elasticsearch(
        es, index_names,
        release_details,
        args.token, args.repo, args.force_index,
        args.keep_previous_dates, args.dry_run
    )

    # Microchip device family packs are reported only when there are already package changes to report
    if mattermost_message.MESSAGE_FILE.exists():
        mattermost_message.add_section('Microchip device family packs', [
            f"- **{mattermost_message.index_label(index_name)}**: {count} pack(s)" for index_name, count in microchip_packs.items() if count
        ], dry_run=args.dry_run, release_tag=release_details[0]['tag_name'])

    # And then promote to latest if requested
    if (args.promote_release_to_latest and not args.dry_run):
        # If current release isn't latest already
        releases, is_latest = is_release_latest(args.repo, args.token, args.release_version)
        if (not is_latest):
            promote_to_latest(releases, args.repo, args.token, args.release_version)
