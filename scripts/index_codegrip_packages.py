import os, time, argparse, json
from elasticsearch import Elasticsearch
from datetime import datetime, timezone

import support as support
import read_codegrip_index as CODEGRIP

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

    return db_version

def index_codegrip_packs(es: Elasticsearch, index_name, doc_codegrip, start_date, end_date):
    package_items = CODEGRIP.convert_item_to_json(doc_codegrip, True)

    # Get the current time in UTC
    current_time = datetime.now(timezone.utc).replace(microsecond=0)
    # If you specifically want the 'Z' at the end instead of the offset
    current_date = current_time.isoformat().replace('+00:00', 'Z')

    print(f"Codegrip Packages Release action has been triggered for {start_date} - {end_date} dates!")
    print("Here are the changes:")

    for package in package_items:
        package_release_date = datetime.strptime(package_items[package]['release_date'], "%Y-%m-%dT%H:%M:%SZ").date()
        # Release only for packages with release date in between of requested days
        if package_release_date >= start_date and package_release_date <= end_date:
            previous_version, new_version, mcus_to_index = CODEGRIP.get_version(es, index_name, package_items[package]['package_name'], package_items[package]['mcus'], package_items[package]['package_version'])
            if previous_version != new_version and len(mcus_to_index):
                
                if package_items[package]['release_date'] == current_date:
                    published_at_date = current_date
                else:
                    published_at_date = "2023-11-16T06:00:00Z"

                doc = {
                    "name": package_items[package]['package_name'],
                    "display_name": package_items[package]['display_name'],
                    "author": "MIKROE",
                    "hidden": False,
                    "type": "programmer_dfp",
                    "version": new_version,
                    "package_version": package_items[package]['package_version'],
                    # Index it to the date that is not visible in NECTO.
                    # After script is finished make sure to run 
                    # https://github.com/MikroElektronika/mikrosdk_v2/actions/workflows/updateReleaseIndexDate.yaml
                    # with the settings set according to release spreadsheet.
                    "published_at": published_at_date,
                    "category": "CODEGRIP Device Pack",
                    "download_link": package_items[package]['download_link'],
                    "package_changed": True,
                    "install_location": package_items[package]['install_location'],
                    "dependencies": json.loads(package_items[package]['dependencies']),
                    "mcus": mcus_to_index
                }

                # Kibana v8 requires _type to be in body in order to have doc_type defined
                doc['_type'] = '_doc'
                resp = es.index(index=index_name, doc_type=None, id=package_items[package]['package_name'], body=doc)

                if ('created' == resp['result'] or 'updated' == resp['result']):
                    print(f"- {package_items[package]['package_name']}")
                    print(f'  - "version": {previous_version} -> {new_version}')
                    print(f'  - "published_at": "{published_at_date}"')

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
    parser = argparse.ArgumentParser(description="Index Codegrip Packages.")
    parser.add_argument("select_index", help="Provided index name")
    parser.add_argument('doc_codegrip', type=str, help='Spreadsheet table download link.')
    parser.add_argument('start_date', type=str, help='First date for Codegrip Packages release.')
    parser.add_argument('end_date', type=str, help='Last date for Codegrip Packages release.')
    parser.add_argument("--es_host", help="Elasticsearch host value", default="")
    parser.add_argument("--es_user", help="Elasticsearch username value", default="")
    parser.add_argument("--es_password", help="Elasticsearch password value", default="")
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

    # Remove any previous multiple indexes, if any
    db_version = remove_duplicate_indexed_files(
        es, args.select_index
    )

    index_codegrip_packs(es, args.select_index, args.doc_codegrip, args.start_date, args.end_date)

