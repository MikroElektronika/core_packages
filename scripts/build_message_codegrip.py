import os, time, argparse
import json, pytz
from elasticsearch import Elasticsearch
from datetime import datetime
import classes.class_generate_events_json as calendar_events

import support as support

def fetch_current_indexed_cg_packs(es : Elasticsearch, index_name):
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
        if '_doc' == eachHit['_type'] and 'codegrip_pack' in eachHit['_source']['name']:
            if False == eachHit['_source']['hidden']:
                all_packages.append(eachHit['_source'])

    # Sort all_packages alphabetically by the 'name' field
    all_packages.sort(key=lambda x: x['name'])

    return all_packages

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Create the release post message for Web.")
    parser.add_argument("title", help="Event title for calendar.")
    parser.add_argument("doc_link", help="Spreadsheet table with release details - link.")
    parser.add_argument("index", help="SDK packages index.")

    ## Parse the arguments
    args = parser.parse_args()

    # Elasticsearch instance used for getting indexing info
    num_of_retries = 1
    print("Trying to connect to ES.")
    while True:
        es = Elasticsearch([os.environ['ES_HOST']], http_auth=(os.environ['ES_USER'], os.environ['ES_PASSWORD']))
        if es.ping():
            break
        # Wait 1 second and try again if connection fails
        if 10 == num_of_retries:
            # Exit if it fails 10 times, something is wrong with the server
            raise ValueError("Connection to ES failed!")
        print(f"Connection retry: {num_of_retries}")
        num_of_retries += 1

        time.sleep(1)

    current_date = datetime.now().strftime("%Y-%m-%d")

    # Get all indexed sdk packages
    all_cg_packs = fetch_current_indexed_cg_packs(es, args.index)

    ## Update release calendar values
    release_calendar = calendar_events.events_json(args.doc_link, args.title)
    release_calendar.fetch_data()
    ## Then generate the input file for teamup API
    release_calendar.generate_file(os.path.join(os.path.dirname(__file__), 'releases.json'))

    with open(os.path.join(os.path.dirname(__file__), 'releases.json'), 'r') as file:
        data = json.load(file)

    release_spreadsheet_data = ''
    update_present = 0
    timezone = pytz.timezone('Europe/Belgrade')
    date_message = datetime.now(timezone).strftime("%a %b %d %H:%M:%S %Z %Y")
    header = f'Codegrip Packages Release for {date_message}:\n\n'
    todays_release = '+ New\n'
    todays_update = '\n+ Updated\n'

    for event in data["NECTO DAILY UPDATE"]["events"]:
        if event['end_dt'].startswith(current_date) and event['released']:
            release_spreadsheet_data += event['notes']

    # Add newly added SDK packages to the release message
    for cg_file in all_cg_packs:
        # First check if this package was published during latest releases
        if 'published_at' in cg_file:
            # Find newly published SDK packages
            if cg_file['published_at'].startswith(current_date):
                # Check if it is a newly released package that is listed in release spreadsheet
                if cg_file['display_name'] in release_spreadsheet_data:
                    # Separate Codegrip Packs to display them at the beginning of the list
                    todays_release += f'  + {cg_file['display_name']}\n'
                    for mcu in cg_file['mcus']:
                        todays_release += f'    + {mcu}\n'
                # If it is not newly released package - add it to UPDATED section
                else:
                    todays_update += f'  + {cg_file['display_name']}\n'
                    update_present = 1

    # Case for the days when we only updated existing Codegrip Packs, but don't release new
    if todays_release == '+ New\n':
        todays_release = ''

    # If there were any updates today - add them
    if update_present:
        todays_release += todays_update

    with open(os.path.join(os.getcwd(), 'message.txt'), 'w') as file:
        file.write(header + todays_release + '\n---')

    print(header + todays_release + '\n---')
