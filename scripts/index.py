import os, time, argparse, requests
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
def fetch_release_details(repo, token):
    api_headers = get_headers(True, token)
    url = f'https://api.github.com/repos/{repo}/releases/latest'
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
    # Iterate over each asset in the release
    metadata_asset = next((a for a in release_details['assets'] if a['name'] == "metadata.json"), None)
    metadata_download_url = metadata_asset['url']
    metadata_content, error = fetch_json_data(metadata_download_url, token)

    for asset in release_details.get('assets', []):
        name_without_extension = os.path.splitext(os.path.basename(asset['name']))[0]
        if name_without_extension == "clocks":
            doc = {
                'name': "clocks",
                'display_name' : "Clocks file",
                'author' : "MIKROE",
                'hidden' : True,
                'type' : "mcu_clocks",
                'version' : release_details['tag_name'],
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
                'version' : release_details['tag_name'],
                'created_at': asset['created_at'],
                'updated_at': asset['updated_at'],
                'category': "MCU Package",
                'download_link': asset['url'],
                'package_changed' : True,
                'install_location' : "%APPLICATION_DATA_DIR%/schemas.json"
            }
        else:
            metadata_item = find_item_by_name(metadata_content, name_without_extension)
            if metadata_item:
                display_name = metadata_item["display_name"]
                current_version = metadata_item['version']
                tag_name = release_details['tag_name']
                install_location = metadata_item["install_location"]
                version = tag_name.replace("v", "")

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
                    'package_changed' : version != current_version,
                    'install_location' : install_location
                }
        # Index the document
        resp = es.index(index=index_name, doc_type='necto_package', id=name_without_extension, body=doc)
        print(f"{resp["result"]} {resp['_id']}")

if __name__ == '__main__':
    # Get arguments
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("token", help="GitHub Token")
    args = parser.parse_args()
    # Fetch release details
    release_details = fetch_release_details(args.repo, args.token)
    # Index release details into Elasticsearch
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
    index_release_to_elasticsearch(es, os.environ['ES_INDEX'], release_details, args.token)
