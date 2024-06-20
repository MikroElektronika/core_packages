import os, re, time, argparse, requests
from elasticsearch import Elasticsearch

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
def fetch_release_details(repo, token, tag):
    api_headers = get_headers(True, token)
    url = f'https://api.github.com/repos/{repo}/releases/{tag}'
    response = requests.get(url, headers=api_headers)
    response.raise_for_status()  # Raise an exception for HTTP errors
    return response.json()

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

# Function to index release details into Elasticsearch
def index_release_to_elasticsearch(es : Elasticsearch, index_name, release_details, token):
    # Iterate over each asset in the release and previous release
    metadata_content = []
    for each_release_details in release_details:
        metadata_asset = next((a for a in each_release_details['assets'] if a['name'] == "metadata.json"), None)
        metadata_download_url = metadata_asset['url']
        metadata_content.append(fetch_json_data(metadata_download_url, token)[0])

    for asset in release_details[0].get('assets', []):
        name_without_extension = os.path.splitext(os.path.basename(asset['name']))[0]

        if name_without_extension == "clocks":
            doc = {
                'name': "clocks",
                'display_name' : "Clocks file",
                'author' : "MIKROE",
                'hidden' : True,
                'type' : "mcu_clocks",
                'version' : release_details[0]['tag_name'],
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed' : True,
                'install_location' : "%APPLICATION_DATA_DIR%/clocks.json"
            }
        elif name_without_extension == "schemas":
            doc = {
                'name': "schemas",
                'display_name' : "schemas file",
                'author' : "MIKROE",
                'hidden' : True,
                'type' : "mcu_schemas",
                'version' : release_details[0]['tag_name'],
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed' : True,
                'install_location' : "%APPLICATION_DATA_DIR%/schemas.json"
            }
        else:
            metadata_item = find_item_by_name(metadata_content[0], name_without_extension)
            previous_metadata_item = find_item_by_name(metadata_content[1], name_without_extension)

            if metadata_item:
                display_name = metadata_item["display_name"]
                install_location = metadata_item["install_location"]
                version = metadata_item['version']

                doc = {
                    'name': name_without_extension,
                    'display_name' : display_name,
                    'author' : "MIKROE",
                    'hidden' : False,
                    'type' : "mcu",
                    'version' : version,
                    'created_at': asset['created_at'],
                    'updated_at': asset['updated_at'],
                    'category': "MCU Package",
                    'download_link': asset['url'],
                    'package_changed' : metadata_item['hash'] != previous_metadata_item['hash'],
                    'install_location' : install_location
                }

        # Index the document
        if re.search('^.+\.(json|7z)$', asset['name']):
            resp = es.index(index=index_name, doc_type='necto_package', id=name_without_extension, body=doc)
            print(f"{resp["result"]} {resp['_id']}")

if __name__ == '__main__':
    # Get arguments
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("tag", help="Previous release tag version")
    parser.add_argument("token", help="GitHub Token")
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

    # Now index the new release
    index_release_to_elasticsearch(
        es, os.environ['ES_INDEX'],
        [
            fetch_release_details(args.repo, args.token, 'latest'),
            fetch_release_details(args.repo, args.token, f'tags/{args.tag}')
        ],
        args.token
    )
