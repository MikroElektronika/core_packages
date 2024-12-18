import os, shutil
import support as support
from elasticsearch import Elasticsearch

def increment_version(version):
    major, minor, patch = map(int, version.split('.'))
    return f"{major}.{minor}.{patch + 1}"

def get_version(es: Elasticsearch, index_name, asset, mcu_list):
    # Search query to use
    query_search = {
        "size": 5000,
        "query": {
            "match_all": {}
        }
    }

    # Search the base with provided query
    search_es_name = asset
    num_of_retries = 1
    while num_of_retries <= 10:
        try:
            response = es.search(index=index_name, body=query_search)
            if not response['timed_out']:
                break
        except:
            print("Executing search query - retry number %i" % num_of_retries)
        num_of_retries += 1

    indexed_version = None
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue
        name = eachHit['_source']['name']
        if name == search_es_name:
            if 'version' in eachHit['_source']:
                indexed_version = eachHit['_source']['version']
                indexed_mcus = eachHit['_source']['mcus']

    new_version = indexed_version

    updated = False
    if new_version:
        for mcu in mcu_list:
            if mcu not in indexed_mcus:
                updated = True
                if indexed_version.startswith('v'):
                    new_version = f'v{increment_version(indexed_version[1:])}'
                else:
                    new_version = increment_version(indexed_version)
                break
    else:
        new_version = '0.0.1'

    return new_version, updated

def convert_item_to_json(docLink, saveToFile=False):
    import urllib.request

    with urllib.request.urlopen(docLink) as f:
        html = f.read().decode('utf-8')
    with open(os.path.join(os.path.dirname(__file__), 'devices.txt'), 'w') as devices:
        devices.write(html)
    devices.close()

    import pandas as pd
    import numpy as np

    # Read the CSV file
    df = pd.read_csv(os.path.join(os.path.dirname(__file__), "devices.txt"))

    # Replace NaN with False for all other columns except 'package_name'
    df.replace({np.nan: False}, inplace=True)

    # Drop rows where `package_name` is NaN or invalid
    df = df[df['package_name'] != False]

    # Group by `package_name` and restructure data
    grouped_programmer_data = {}

    for package_name, group in df.groupby("package_name"):
        # Get the first row of the group to extract common package details
        package_details = group.iloc[0][[
            "vendor",
            "programmers",
            "debuggers",
            "category",
            "package_name",
            "package_version",
            "display_name",
            "install_location",
            "download_link",
            "dependencies",
        ]].to_dict()

        # Add the list of MCU names under the key "mcus"
        package_details["mcus"] = group["name"].tolist()

        # Store the result by package_name
        grouped_programmer_data[package_name] = package_details
    if os.path.exists(os.path.join(os.path.dirname(__file__), "devices.txt")):
        os.remove(os.path.join(os.path.dirname(__file__), "devices.txt"))

    if saveToFile:
        import json
        with open(os.path.join(os.path.dirname(__file__), 'devices.json'), 'w') as json_file:
            json_file.write(json.dumps(grouped_programmer_data, indent=4))

    return grouped_programmer_data
