import os, sqlite3, re
import support as support
from elasticsearch import Elasticsearch

def functionRegex(value, pattern):
    reg = re.compile(value)
    return reg.search(pattern) is not None

def read_data_from_db(db, sql_query):
    ## Open the database / connect to it
    con = sqlite3.connect(db)
    cur = con.cursor()

    ## Create the REGEXP function to be used in DB
    con.create_function("REGEXP", 2, functionRegex)

    ## Execute the desired query
    cur.execute(sql_query)
    results = []
    for row in cur.fetchall():
        results.append(row[0].lower())

    ## Close the connection
    cur.close()
    con.close()

    ## Return query results
    return results

def filter_versions(versions):
    # Filter out versions that contain non-numeric characters (e.g., words or suffixes)
    filtered_versions = [v for v in versions if all(part.isdigit() for part in v.split('.'))]
    return filtered_versions

def get_devices_from_latest_sdk(index_name):
    if 'test' in index_name:
        db = 'necto_db_dev.db'
    else:
        db = 'necto_db.db'
    sdkVersions = read_data_from_db(db, 'SELECT DISTINCT version FROM SDKs WHERE name IS "mikroSDK"')
    versions = filter_versions(list(v for v in sdkVersions))
    max_version = f'mikrosdk_v{max(versions, key=lambda v: tuple(map(int, v.split('.')))).replace('.','')}'
    # Get all the MCUs that are supported in NECTO
    query = f'''
        SELECT DISTINCT uid FROM Devices
        INNER JOIN SDKToDevice ON SDKToDevice.device_uid = Devices.uid
        WHERE SDKToDevice.sdk_uid REGEXP '{max_version}|mikroc\.legacy.+'
    '''
    mcu_list = read_data_from_db(db, query)

    return mcu_list

def increment_version(version):
    major, minor, patch = map(int, version.split('.'))
    return f"{major}.{minor}.{patch + 1}"

def get_version(es: Elasticsearch, index_name, asset, csv_package_mcus, package_version):
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
    indexed_package_version = None
    for eachHit in response['hits']['hits']:
        if not 'name' in eachHit['_source']:
            continue
        name = eachHit['_source']['name']
        if name == search_es_name:
            if 'version' in eachHit['_source']:
                indexed_version = eachHit['_source']['version']
                indexed_package_version = eachHit['_source']['package_version']
                indexed_mcus = eachHit['_source']['mcus']

    mcu_list = get_devices_from_latest_sdk(index_name)

    mcus_to_index = []
    for mcu in csv_package_mcus:
        if mcu.lower() in mcu_list:
            mcus_to_index.append(mcu)

    new_version = package_version
    if indexed_version:
        if mcus_to_index != indexed_mcus or indexed_package_version != package_version:
            new_version = increment_version(indexed_version)

    return indexed_version, new_version, mcus_to_index

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
