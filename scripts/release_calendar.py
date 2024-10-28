import os, argparse, json, urllib.request

from datetime import datetime

def get_data(link, calendar_title, saveToFile=None):
    """
    Fetches data from the provided link, processes the release information, and merges events with the same start date.
    :param link: URL to fetch the CSV data.
    :param saveToFile: Optional; path to save the processed JSON data.
    :return: A list of merged events based on their start date.
    """
    try:
        ## Fetch the data from the provided link
        with urllib.request.urlopen(link) as f:
            html = f.read().decode('utf-8')
        ## Save fetched data temporarily to a file named 'releases.txt'
        with open(os.path.join(os.path.dirname(__file__), 'releases.txt'), 'w') as releases:
            releases.write(html)
        releases.close()
    except Exception as e:
        ## Handle errors that may occur during the data fetch process
        print(f"Error fetching data: {e}")
    ## Read lines from the temporary file
    with open(os.path.join(os.path.dirname(__file__), 'releases.txt'), 'r') as releases:
        all_releases = releases.readlines()
    releases.close()
    ## Remove the temporary file after reading its content
    if os.path.exists(os.path.join(os.path.dirname(__file__), "releases.txt")):
        os.remove(os.path.join(os.path.dirname(__file__), "releases.txt"))
    ## List to store formatted event data
    formatted_array = []
    for each_line in all_releases:
        ## Split the line into individual parts based on commas
        parts = each_line.split(',')
        ## Skip empty lines or headers
        if parts[0] == '' or parts[0] == 'Product name' or parts[0] == '\n':
            continue
        ## Extract the board name and release plan date
        board_name = parts[0]
        try:
            ## Parse the release date from the format 'dd.mm.yyyy'
            release_date = datetime.strptime(parts[3], "%d.%m.%Y")
        except ValueError:
            ## Skip lines with incorrect date format
            continue
        ## Create a dictionary for each event and append to the formatted array
        formatted_array.append(
            {
                "notes": f"<ul>\n<li>{board_name}</li>\n</ul>",
                "branch": parts[1],
                "tz": "Europe/Belgrade",
                "start_dt": release_date.strftime("%Y-%m-%d"),
            }
        )
    ## Dictionary to merge nodes based on the start date
    merged_nodes = {}
    ## Merge events with the same start date by combining their notes
    for value in formatted_array:
        start_dt = value['start_dt']
        if start_dt not in merged_nodes:
            ## Add new event if the start date does not exist
            merged_nodes[start_dt] = value
        else:
            ## Combine the notes of events with the same start date
            existing_notes = merged_nodes[start_dt]['notes']
            new_notes = value['notes'].replace('<ul>', '').replace('</ul>', '')  ## Strip outer tags to merge correctly
            merged_nodes[start_dt]['notes'] = existing_notes.replace('</ul>', '') + new_notes + '</ul>'
    ## Convert the merged_nodes dictionary back into a list of merged events
    merged_events = list(merged_nodes.values())
    ## Save the merged events to a file if saveToFile path is provided
    if saveToFile:
        try:
            with open(saveToFile, 'w') as json_file:
                json_file.write(json.dumps(merged_events, indent=4))
        except IOError as e:
            ## Handle errors during file saving
            print(f"Error saving to file: {e}")
    ## Return the list of merged events
    return merged_events

def fetch_data(release_table_link, calendar_title, save_to_file=None):
    """
    Fetches data from the release table link and stores the processed events.
    :param save_to_file: Optional; path to save the processed JSON data.
    """
    ## Fetch data from the Google Sheets CSV export link and populate events
    file_out = {
        calendar_title: {
            "events": []
        }
    }

    file_out[calendar_title]["events"] = \
        get_data(
            f'https://docs.google.com/spreadsheets/d/{release_table_link}/export?format=csv',
            calendar_title,
            save_to_file
        )

    return file_out

def generate_file(file_data, file_out_path):
    """
    Generates a JSON file containing the processed event data.
    :param file_out_path: Path to save the final output JSON file.
    """
    try:
        with open(file_out_path, 'w') as file:
            file.write(json.dumps(file_data, indent=4))
    except IOError as e:
        ## Handle errors that may occur during file generation
        print(f"Error generating file: {e}")

def find_branch():
    with open(os.path.join(os.path.dirname(__file__), 'releases.json')) as file:
        json_data = json.load(file)
    current_date = f'{datetime.today().year}-{datetime.today().month}-{datetime.today().day}'

    for release in json_data['NECTO DAILY UPDATE']["events"]:
        date = release["start_dt"]
        if "2025-02-05" == date:
            return release["branch"]

    return "new_branch"

if __name__ == "__main__":
    ## Set up argument parsing
    parser = argparse.ArgumentParser(description="Iterate through dates in a range and create calendar events if needed.")
    parser.add_argument("--title", type = str, help="Event title for calendar.", required=True)
    parser.add_argument("--doc_link", type = str, help="Spreadsheet table with release details - link.",required=True)

    ## Parse the arguments
    args = parser.parse_args()

    ## Update release calendar values
    fileData = fetch_data(args.doc_link, args.title)
    ## Then generate the input file for teamup API
    generate_file(fileData, os.path.join(os.path.dirname(__file__), 'releases.json'))
    ## Find branch name from the jsom data for the current time
    print(find_branch())



