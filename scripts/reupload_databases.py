import os, re, sys, \
       shutil, argparse, \
       sqlite3, json, \
       asyncio, aiohttp, \
       subprocess, aiofiles, \
       requests, hashlib, \
       xmltodict, time


from pathlib import Path
from packaging import version
from urllib.parse import urlparse
from collections import defaultdict
from packaging.version import Version

import xml.etree.ElementTree as ET

## Import utility modules
## Append to system path
sys.path.append(str(Path(os.path.dirname(__file__)).parent.parent.absolute()))
sys.path.append(str(Path(os.path.dirname(__file__)).absolute()))

import enums as enums
import support as utility
import addSdkVersion as sdk
import read_microchip_index as MCHP

entranceCheckProg = True
entranceCheckDebug = True

START_TIME = time.perf_counter()

mcuCardCheckList = [
    'CARD', 'SIBRAIN', 'MICROMOD', 'PIM'
]

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
    results = cur.execute(sql_query).fetchall()
    # results = cur.fetchall()

    ## Close the connection
    cur.close()
    con.close()

    ## Return query results
    return len(results), results

def addCollumnToTable(db, tableName, collumnName, collumnType, defaultValue='NoDefault'):
    import sqlite3

    conn = sqlite3.connect(db)
    cur = conn.cursor()
    if defaultValue == 'NoDefault':
        cur.execute(f'ALTER TABLE {tableName} ADD COLUMN {collumnName} {collumnType};')
    else:
        cur.execute(f'ALTER TABLE {tableName} ADD COLUMN {collumnName} {collumnType} default {defaultValue};')
    conn.commit()
    conn.close()

def insertIntoTable(db, tableName, values, columns):
    import sqlite3

    conn = sqlite3.connect(db)
    cur = conn.cursor()
    numOfItems = ''
    for itemCount in range(1, len(values) + 1):
        numOfItems += '?,'
    cur.execute(f'INSERT OR IGNORE INTO {tableName} ({columns}) VALUES ({numOfItems[:-1]})', values)
    conn.commit()
    conn.close()

def deleteFromTable(db, sql_query):
    try:
        sqliteConnection = sqlite3.connect(db)
        cursor = sqliteConnection.cursor()

        # Deleting single record now
        cursor.execute(sql_query)
        sqliteConnection.commit()
        cursor.close()
    except sqlite3.Error as error:
        print("Failed to delete record from sqlite table", error)
    finally:
        if sqliteConnection:
            sqliteConnection.close()

def updateTableCollumn(db, table, collumn, setNewValue, collumnIf, collumnIfValue, customQuery=None):
    import sqlite3

    conn = sqlite3.connect(db)
    cur = conn.cursor()
    if customQuery:
        cur.execute(customQuery)
    else:
        cur.execute(f'UPDATE {table} SET {collumn} = "{setNewValue}" WHERE {collumnIf} = "{collumnIfValue}"')
    conn.commit()
    conn.close()

def filter_versions(versions):
    # Filter out versions that contain non-numeric characters (e.g., words or suffixes)
    filtered_versions = [v for v in versions if all(part.isdigit() for part in v.split('.'))]
    return filtered_versions

def get_highest_and_second_highest(versions):
    from packaging import version
    # Parse the version strings to version objects for comparison
    version_objects = [version.parse(v) for v in versions]

    # Sort the versions in descending order
    sorted_versions = sorted(version_objects, reverse=True)

    # Get the highest and second-highest versions
    highest_version = str(sorted_versions[0])
    second_highest_version = str(sorted_versions[1]) if len(sorted_versions) > 1 else None

    return highest_version, second_highest_version

def find_and_convert_xml_files(base_path):
    device_dict = defaultdict(list)

    for root, _, files in os.walk(base_path):
        if 'device_support.xml' in files:
            xml_path = os.path.join(root, 'device_support.xml')
            root_folder = os.path.basename(root)  # Get the root folder name
            try:
                tree = ET.parse(xml_path)
                root_element = tree.getroot()
                extract_devices(root_element, root_folder, device_dict)
            except ET.ParseError as e:
                print(f"Error parsing {xml_path}: {e}")

    return dict(device_dict)

def extract_devices(root, root_folder, device_dict, namespace="{http://crownking/mplab}"):
    for family in root.findall(f"{namespace}family"):
        for device in family.findall(f"{namespace}device"):
            device_name = device.attrib.get(f"{{http://crownking/mplab}}name", "Unknown")
            support = device.find(f"{namespace}support")
            support_attributes = support.attrib if support is not None else {}

            device_dict[device_name].append({
                "root_folder": root_folder,
                "support": support_attributes
            })

def filter_releases_by_version(json_data):
    def get_highest_version(versions):
        return max(versions, key=Version)

    def fetch_latest_release(releases, version):
        if isinstance(releases, (list, tuple)):
            for release in releases:
                if release['@version'] == version:
                    return release['atmel:devices']['atmel:device']
        else:
            return releases['atmel:devices']['atmel:device']

    # Extract the pdsc items from the JSON data
    pdsc_items = json_data.get('idx', {}).get('pdsc', [])

    # Then filter out only the TP packs
    dfp_tp_packs = [pdsc_item for pdsc_item in pdsc_items if re.search('TP\.pdsc', pdsc_item['@name'])]

    # Iterate through each pdsc item
    dfp_tp_link_list = []
    for dfp_tp_pack in dfp_tp_packs:
        releases = dfp_tp_pack.get('atmel:releases', {}).get('atmel:release', [])
        if isinstance(releases, (list, tuple)):
            max_version = get_highest_version([release['@version'] for release in releases])
        else:
            max_version = releases['@version']

        if '@version' in releases:
            dfp_tp_link_list.append(f'https://{dfp_tp_pack['@url']}/{utility.drop_extension(dfp_tp_pack['@name'])}.{dfp_tp_pack['@version']}.atpack')
        else:
            for release in releases:
                if release['@version'] == max_version:
                    dfp_tp_link_list.append(f'https://{dfp_tp_pack['@url']}/{utility.drop_extension(dfp_tp_pack['@name'])}.{dfp_tp_pack['@version']}.atpack')

    return dfp_tp_link_list

def fetch_latest_package_links(xml_content):
    # Form download links to latest packages
    return filter_releases_by_version(xml_content)

## Download databases or fetch from disk
def downloadDb(downloadLink, overwrite=True):
    dbPath1 = None
    dbPath2 = None
    if 'http' in downloadLink:
        if '.7z' in downloadLink:
            dbPath1 = os.path.join(os.path.dirname(__file__), "databases/necto_db.db")
            if overwrite or not os.path.isfile(dbPath1):
                utility.extract_archive_from_url(
                    downloadLink, os.path.join(os.path.dirname(__file__), "databases")
                )
            if 'database_dev' not in downloadLink:
                dbPath2 = os.path.join(os.path.dirname(__file__), "erp_db.db")
                if overwrite or not os.path.isfile(dbPath2):
                    shutil.copyfile(dbPath1, dbPath2)
    else:
        dbPath1 = downloadLink ## Assume it is a local literal path

    return dbPath1, dbPath2

def checkDeviceDetails(db, allDevicesGithub):
    if allDevicesGithub[enums.dbSync.COUNT.value]:
        deviceDetailsColumns = 'uid, graphic_mcu, notes, datasheet_url, is_mcu_card, device_uid'
        for eachDevice in allDevicesGithub[enums.dbSync.ELEMENTS.value]:
            currentDevice = read_data_from_db(
                db, f'SELECT * FROM DeviceDetails WHERE uid IS "{eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]}"'
            )
            # If '_' character is met - it is MCU card uid
            if '_' in eachDevice[0]:
                mcu = eachDevice[1].replace(".json", "")
                datasheet_url = f'https://download.mikroe.com/documents/datasheets/erp/{eachDevice[1].replace(".json", "")}.pdf'
                device_uid = mcu
            else:
                datasheet_url = f'https://download.mikroe.com/documents/datasheets/erp/{eachDevice[0]}.pdf'
                device_uid = ''
            if not currentDevice[0]:
                insertIntoTable(
                    db,
                    'DeviceDetails',
                    [
                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value], ## uid
                        False, ## graphic_mcu
                        '', ## notes
                        datasheet_url, ## datasheet_url
                        any(element in eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value] for element in mcuCardCheckList),
                        device_uid ## device_uid
                    ],
                    deviceDetailsColumns
                )
                print("Added %s to database DeviceDetails table.\n" % eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value])
    return

def checkDevicePackages(database, allDevicesGithub):
    packageString = None
    if allDevicesGithub[enums.dbSync.COUNT.value]:
        boardToDeviceColumns = 'board_uid, device_uid, package_uid'
        for eachDevice in allDevicesGithub[enums.dbSync.ELEMENTS.value]:
            devicePackages = read_data_from_db(
                database, f'SELECT * FROM DeviceToPackage WHERE device_uid IS "{eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]}"'
            )
            if devicePackages[enums.dbSync.COUNT.value]:
                packageString = ','.join([pkg[enums.dbSync.ELEMENTS.value] for pkg in devicePackages[enums.dbSync.ELEMENTS.value]])
            boardToDeviceUid = read_data_from_db(
                database, f'SELECT * FROM BoardToDevice WHERE device_uid IS "{eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]}"'
            )
            if boardToDeviceUid[enums.dbSync.COUNT.value]:
                for boardValues in boardToDeviceUid[enums.dbSync.ELEMENTS.value]:
                    if boardValues[enums.dbSync.BOARDTODEVICEPACKAGES.value] != packageString:
                        deleteFromTable(
                            database,
                            f'DELETE FROM BoardToDevice WHERE (board_uid="{boardValues[enums.dbSync.BOARDTODEVICEBOARD.value]}" AND device_uid="{boardValues[enums.dbSync.BOARDTODEVICEDEVICE.value]}")'
                        )
                        insertIntoTable(
                            database,
                            'BoardToDevice',
                            [
                                boardValues[enums.dbSync.BOARDTODEVICEBOARD.value], ## board_uid
                                boardValues[enums.dbSync.BOARDTODEVICEDEVICE.value], ## device_uid
                                packageString ## package_uid
                            ],
                            boardToDeviceColumns
                        )
                        # TODO - uncomment for testing purposes
                        # print("Added %s/%s/%s to database BoardToDevice table.\n" % ((boardValues[enums.dbSync.BOARDTODEVICEBOARD.value], boardValues[enums.dbSync.BOARDTODEVICEDEVICE.value], packageString)))
    return

def clearDevicePackages(database):
    deleteFromTable(
        database,
        f'DELETE FROM BoardToDevice WHERE (board_uid IS NULL OR device_uid IS NULL)'
    )

def getProgDbgAsJson(docLink, saveToFile=False):
    import urllib.request

    with urllib.request.urlopen(docLink) as f:
        html = f.read().decode('utf-8')
    with open(os.path.join(os.path.dirname(__file__), 'devices.txt'), 'w') as devices:
        devices.write(html)
    devices.close()

    import pandas as pd
    import numpy as np

    df = pd.read_csv(os.path.join(os.path.dirname(__file__), "devices.txt"))
    df.replace({np.nan: False}, inplace=True)
    if 'amazonaws' in docLink:
        data_dict = df.set_index('name').to_dict(orient='index')
    else:
        data_dict = df.set_index('Name').to_dict(orient='index')
    formatted_dict = {mcu.lower(): data for mcu, data in data_dict.items()}
    if os.path.exists(os.path.join(os.path.dirname(__file__), "devices.txt")):
        os.remove(os.path.join(os.path.dirname(__file__), "devices.txt"))

    if saveToFile:
        import json
        with open(os.path.join(os.path.dirname(__file__), 'devices.json'), 'w') as json_file:
            json_file.write(json.dumps(formatted_dict, indent=4))

    return formatted_dict

def checkProgrammerToDevice(database, devices, progDbgInfo, addGeneral=False):
    ProgrammerToDeviceColumns = 'programer_uid, device_uid, device_support_package'

    progUidList = [
        progUid[enums.dbSync.PROGRAMMERSPROGRAMMER.value] for progUid in
        read_data_from_db(
            database, 'SELECT DISTINCT uid FROM Programmers'
        )[enums.dbSync.ELEMENTS.value]
    ]

    global entranceCheckProg
    if entranceCheckProg:
        entranceCheckProg = False
        for eachProgUid in progUidList:
            deleteFromTable(
                database,
                f'DELETE FROM ProgrammerToDevice WHERE programer_uid="{eachProgUid}"'
            )
            # TODO - uncomment for testing purposes
            # print("Removed %s from database ProgrammerToDevice table.\n" % eachProgUid)

    for eachDevice in devices[enums.dbSync.ELEMENTS.value]:
        if eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '').lower() in progDbgInfo:
            for eachProgCheckKey in progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '').lower()].keys():
                if re.search('Programmers',eachProgCheckKey, re.IGNORECASE):
                    if progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '').lower()][eachProgCheckKey]:
                        splitProgsDebuggers = progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '').lower()][eachProgCheckKey].split('/')
                        for eachProgDebug in splitProgsDebuggers:
                            progDebugUid = read_data_from_db(
                                database,
                                f'SELECT uid FROM Programmers WHERE name IS "{eachProgDebug}"'
                            )
                            if 'package_name' in progDbgInfo[eachDevice[enums.dbSync.ELEMENTS.value].lower().replace('.json', '')]:
                                device_support_package = f'["{progDbgInfo[eachDevice[enums.dbSync.ELEMENTS.value].lower().replace('.json', '')]['package_name']}"]'
                                # If there is no Debugger support for Codegrip in csv file, add it but without any codegrip package
                                if device_support_package == '["False"]':
                                    device_support_package = '[""]'
                            else:
                                device_support_package = ''
                            if progDebugUid[enums.dbSync.COUNT.value]:
                                insertIntoTable(
                                    database,
                                    'ProgrammerToDevice',
                                    [
                                        progDebugUid[enums.dbSync.ELEMENTS.value][0][enums.dbSync.PROGRAMMERTODEVICEPROGRAMMER.value], ## programer_uid
                                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value], ## device_uid
                                        device_support_package
                                    ],
                                    ProgrammerToDeviceColumns
                                )
                                # TODO - uncomment for testing purposes
                                # print(
                                #     "Added %s/%s/%s to database ProgrammerToDevice table.\n" %
                                #     (
                                #         progDebugUid[enums.dbSync.ELEMENTS.value][0][enums.dbSync.PROGRAMMERTODEVICEPROGRAMMER.value],
                                #         eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value],
                                #         device_support_package
                                #     )
                                # )
        # Always add gdb_general
        if addGeneral:
            insertIntoTable(
                database,
                'ProgrammerToDevice',
                [
                    'gdb_general', ## programer_uid
                    eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value], ## device_uid
                    '' ## device_support_package
                ],
                ProgrammerToDeviceColumns
            )
            # TODO - uncomment for testing purposes
            # print(
            #     "Added gdb_general/%s to database ProgrammerToDevice table.\n" %
            #     (
            #         eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]
            #     )
            # )
    return

def checkDebuggerToDevice(database, devices, progDbgInfo, addGeneral=False):
    DebuggerToDeviceColumns = 'debugger_uid, device_uid'

    progUidList = [
        progUid[enums.dbSync.PROGRAMMERSPROGRAMMER.value] for progUid in
        read_data_from_db(
            database, 'SELECT DISTINCT uid FROM Debuggers'
        )[enums.dbSync.ELEMENTS.value]
    ]

    global entranceCheckDebug
    if entranceCheckDebug:
        entranceCheckDebug = False
        for eachProgUid in progUidList:
            deleteFromTable(
                database,
                f'DELETE FROM DebuggerToDevice WHERE debugger_uid="{eachProgUid}"'
            )
            # TODO - uncomment for testing purposes
            # print("Removed %s from database DebuggerToDevice table.\n" % eachProgUid)

    for eachDevice in devices[enums.dbSync.ELEMENTS.value]:
        if eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '').lower() in progDbgInfo:
            for eachProgCheckKey in progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '').lower()].keys():
                if re.search('Debuggers',eachProgCheckKey, re.IGNORECASE):
                    if progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '').lower()][eachProgCheckKey]:
                        splitProgsDebuggers = progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '').lower()][eachProgCheckKey].split('/')
                        for eachProgDebug in splitProgsDebuggers:
                            progDebugUid = read_data_from_db(
                                database,
                                f'SELECT uid FROM Debuggers WHERE name IS "{eachProgDebug}"'
                            )
                            if progDebugUid[enums.dbSync.COUNT.value]:
                                insertIntoTable(
                                    database,
                                    'DebuggerToDevice',
                                    [
                                        progDebugUid[enums.dbSync.ELEMENTS.value][0][enums.dbSync.PROGRAMMERTODEVICEPROGRAMMER.value], ## debugger_uid
                                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value] ## device_uid
                                    ],
                                    DebuggerToDeviceColumns
                                )
                                # TODO - uncomment for testing purposes
                                # print(
                                #     "Added %s/%s to database DebuggerToDevice table.\n" %
                                #     (
                                #         progDebugUid[enums.dbSync.ELEMENTS.value][0][enums.dbSync.PROGRAMMERTODEVICEPROGRAMMER.value],
                                #         eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]
                                #     )
                                # )
        ## Always add gdb_general?
        if addGeneral:
            insertIntoTable(
                database,
                'ProgrammerToDevice',
                [
                    'gdb_general', ## programer_uid
                    eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value] ## device_uid
                ],
                DebuggerToDeviceColumns
            )
            # TODO - uncomment for testing purposes
            # print("Added gdb_general/%s to database ProgrammerToDevice table.\n" % eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value])
    return

def addCollumnsToTable(db, collumns, table, types, defaultValues=None):
    for eachCollumn, eachType, defaultValue in zip(collumns, types, defaultValues):
        checkCollumn = read_data_from_db(
            db, f'SELECT COUNT(*) AS CNTREC FROM pragma_table_info("{table}") WHERE name="{eachCollumn}"'
        )
        if not checkCollumn[enums.dbSync.ELEMENTS.value] \
                           [enums.dbSync.COUNT.value] \
                           [enums.dbSync.COUNT.value]:
            addCollumnToTable(db, table, eachCollumn, eachType, defaultValue)
            # TODO - uncomment for testing purposes
            # print("Added %s collumn (type %s) to %s table. (Default value - %s)\n" % (eachCollumn, eachType, table, defaultValue))
    return

def compress_directory_7z(base_output_dir, entry_name, arch=None):
    """
    Compresses the given directory into a 7z archive using the 7z command line tool.

    Args:
    source_dir (str): Path to the directory to be compressed.
    output_file (str): Path where the output .7z file should be saved.

    Returns:
    bool: True if compression was successful, False otherwise.
    """
    # Construct the command to compress the directory
    command = [
        '7z', 'a',  # 'a' stands for adding to an archive
        '-t7z',     # Specify 7z archive type
        '-mx3',
        '-mtc=off'  # Do not store timestamps
    ]

    # Check if the source directory exists
    if arch:
        archive_name = base_output_dir + ".7z"
    else:
        archive_name = os.path.join(os.path.dirname(base_output_dir), entry_name)

    command.append(archive_name) # Path to the output .7z file
    command.append(os.path.join(base_output_dir, '*'))  # Path to the source directory content

    if not os.path.isdir(base_output_dir):
        print(f"The specified directory does not exist: {base_output_dir}")
        return False

    # Execute the command
    try:
        subprocess.run(command, check=True)
        print(f"Archive created successfully: {archive_name}")
        return archive_name
    except subprocess.CalledProcessError as e:
        print(f"An error occurred while creating the archive: {e}")
        return None

async def get_all_assets(session, token, repo, release_id):
    """ Retrieve all assets for a given release, handling pagination """
    headers = {'Authorization': f'token {token}'}
    assets = []
    page = 1

    while True:
        # Fetch assets with pagination
        assets_url = f"https://api.github.com/repos/{repo}/releases/{release_id}/assets?page={page}&per_page=100"
        async with session.get(assets_url, headers=headers) as response:
            page_assets = await response.json()

            # If no more assets, break the loop
            if not page_assets:
                break

            assets.extend(page_assets)
            page += 1

    return assets

async def upload_release_asset(session, token, repo, asset_path, release_version=None):
    """ Upload a release asset to GitHub """
    print(f"Preparing to upload asset: {os.path.basename(asset_path)}...")
    headers = {'Authorization': f'token {token}', 'Content-Type': 'application/octet-stream'}
    release_url = f"https://api.github.com/repos/{repo}/releases/latest"
    if release_version:
        if len(release_version) and ('latest' != release_version):
            release_url = f"https://api.github.com/repos/{repo}/releases/tags/{release_version}"
    async with session.get(release_url, headers=headers) as response:
        response_data = await response.json()
        release_id = response_data['id']

    # Get all assets for the release
    assets = await get_all_assets(session, token, repo, release_id)
    # Then, filter out the one needed
    existing_asset = next((asset for asset in assets if asset['name'] == os.path.basename(asset_path)), None)

    # If the asset exists, delete it
    if existing_asset:
        delete_url = existing_asset['url']
        async with session.delete(delete_url, headers=headers) as response:
            if response.status == 204:
                print(f"Deleted asset: {os.path.basename(asset_path)}.")
            else:
                print(f"Failed to delete asset: {os.path.basename(asset_path)}. Status code: {response.status}")
                return False
    else:
        print(f"Asset {os.path.basename(asset_path)} not found. Nothing to delete.")

    upload_url = f"https://uploads.github.com/repos/{repo}/releases/{release_id}/assets?name={os.path.basename(asset_path)}"
    async with aiofiles.open(asset_path, 'rb') as f:
        data = await f.read()
    async with session.post(upload_url, headers=headers, data=data) as response:
        result = await response.json()
    print(f"Upload completed for: {os.path.basename(asset_path)}.")
    return result

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

    # First: 5 fast attempts (10s timeout)
    for attempt in range(1, 6):
        try:
            print(f'GitHub API attempt {attempt}/5 (timeout=10s)')
            response = requests.get(url, headers=api_headers, timeout=10)
            response.raise_for_status()

        except requests.exceptions.RequestException as e:
            last_exception = e
            print(f'\033[93mAttempt {attempt} failed:\033[0m {e}')

    # Final fallback attempt (600s timeout)
    try:
        print('Final attempt with extended timeout (600s)')
        response = requests.get(url, headers=api_headers, timeout=600)
        response.raise_for_status()

    except requests.exceptions.RequestException as e:
        print('\033[91mFinal attempt failed too\033[0m')
        raise last_exception from e

    if "latest" == release_version:
        return utility.get_latest_release(response.json())
    else:
        release_check = None
        release_check = utility.get_specified_release(response.json(), release_version)
        if release_check:
            return release_check
        else:
            ## Always fallback to latest release
            print("WARNING: Falling back to LATEST release.")
            return utility.get_latest_release(response.json())

def formRegexQuery(collumn, regexes):
    finalQuery = ''
    if 'like' in regexes:
        like_patterns = regexes["like"]
        like_conditions = " OR ".join([f"{collumn} LIKE '%{pattern}%'" for pattern in like_patterns])
        finalQuery = f'({like_conditions})'
    if 'not_like' in regexes:
        not_like_patterns = regexes["not_like"]
        not_like_conditions = " AND ".join([f"{collumn} NOT LIKE '%{pattern}%'" for pattern in not_like_patterns])
        finalQuery += f' AND ({not_like_conditions})'

    return f"{finalQuery};"

def updateBoardsFromSdk(dbs, queries):
    allBoardDirs = os.listdir(queries)
    for eachBoardDir in allBoardDirs:
        currentBoardDir = os.path.join(queries, eachBoardDir)
        currentBoardFiles = os.listdir(currentBoardDir)

        for eachDb in dbs:
            if eachDb:
                if 'Boards.json' in currentBoardFiles:
                    with open(os.path.join(currentBoardDir, 'Boards.json'), 'r') as file:
                        board = json.load(file)
                    file.close()
                    values = []
                    collumns = []
                    for eachKey in board.keys():
                        collumns.append(eachKey)
                        values.append(board[eachKey])
                    insertIntoTable(
                        eachDb,
                        'Boards',
                        values,
                        ','.join(collumns)
                    )

                if 'LinkerTables.json' in currentBoardFiles:
                    with open(os.path.join(currentBoardDir, 'LinkerTables.json'), 'r') as file:
                        linkerTables = json.load(file)
                    file.close()
                    for eachTable in linkerTables['tables']:
                        if 'BoardToSocket' in eachTable:
                            for eachSocket in eachTable['BoardToSocket']['socket_uid']:
                                checkSocket = read_data_from_db(eachDb, f'SELECT uid FROM Sockets WHERE uid IS "{eachSocket}"')
                                if not checkSocket[enums.dbSync.COUNT.value]:
                                    insertIntoTable(
                                        eachDb,
                                        'Sockets',
                                        eachSocket,
                                        'uid'
                                    )
                                insertIntoTable(
                                    eachDb,
                                    'BoardToSocket',
                                    [
                                        linkerTables['board_uid'],
                                        eachSocket
                                    ],
                                    'board_uid, socket_uid'
                                )

                        if 'SDKToBoard' in eachTable:
                            sdkVersions = read_data_from_db(eachDb, 'SELECT DISTINCT version FROM SDKs WHERE name IS "mikroSDK"')
                            versions = filter_versions(list(v[0] for v in sdkVersions[enums.dbSync.ELEMENTS.value]))
                            threshold_version = version.parse(eachTable['SDKToBoard']['sdk_uid'][:-1])
                            filtered_versions = [f'mikrosdk_v{v.replace('.','')}' for v in versions if version.parse(v) >= threshold_version]
                            for eachVersion in filtered_versions:
                                insertIntoTable(
                                    eachDb,
                                    'SDKToBoard',
                                    [
                                        eachVersion,
                                        linkerTables['board_uid']
                                    ],
                                    'sdk_uid, board_uid'
                                )

                        if 'BoardToDevice' in eachTable:
                            if 'regexes' in eachTable['BoardToDevice']['device_uid']:
                                formedRegex = formRegexQuery('uid', eachTable['BoardToDevice']['device_uid']['regexes'])
                                currentDeviceUids = read_data_from_db(
                                    eachDb, f'SELECT uid FROM Devices WHERE {formedRegex}'
                                )
                                if currentDeviceUids[enums.dbSync.COUNT.value]:
                                    for eachDeviceUid in currentDeviceUids[enums.dbSync.ELEMENTS.value]:
                                        insertIntoTable(
                                            eachDb,
                                            'BoardToDevice',
                                            [
                                                linkerTables['board_uid'],
                                                eachDeviceUid[0]
                                            ],
                                            'board_uid, device_uid'
                                        )
                            else:
                                if list == type(eachTable['BoardToDevice']['device_uid']):
                                    for eachDevice in eachTable['BoardToDevice']['device_uid']:
                                        insertIntoTable(
                                            eachDb,
                                            'BoardToDevice',
                                            [
                                                linkerTables['board_uid'],
                                                eachDevice
                                            ],
                                            'board_uid, device_uid'
                                        )
                                else:
                                    insertIntoTable(
                                        eachDb,
                                        'BoardToDevice',
                                        [
                                            linkerTables['board_uid'],
                                            eachTable['BoardToDevice']['device_uid']
                                        ],
                                        'board_uid, device_uid'
                                    )

    return

def updateDevicesFromSdk(dbs, queries):
    allDevicesDirs = os.listdir(queries)
    for eachDeviceDir in allDevicesDirs:
        currentDeviceDir = os.path.join(queries, eachDeviceDir)
        currentDeviceFiles = os.listdir(currentDeviceDir)

        for eachDb in dbs:
            if eachDb:
                if 'Devices.json' in currentDeviceFiles:
                    with open(os.path.join(currentDeviceDir, 'Devices.json'), 'r') as file:
                        device = json.load(file)
                    file.close()
                    values = []
                    collumns = []
                    for eachKey in device.keys():
                        collumns.append(eachKey)
                        values.append(device[eachKey])
                    insertIntoTable(
                        eachDb,
                        'Devices',
                        values,
                        ','.join(collumns)
                    )

                if 'LinkerTables.json' in currentDeviceFiles:
                    with open(os.path.join(currentDeviceDir, 'LinkerTables.json'), 'r') as file:
                        linkerTables = json.load(file)
                    file.close()
                    table_keys = [list(table.keys())[0] for table in linkerTables['tables']]
                    for eachTableKey in table_keys:
                        collumns = ['device_uid']
                        values = [linkerTables['device_uid']]
                        for eachKey in linkerTables['tables']:
                            if eachTableKey in eachKey:
                                collumns.append(list(eachKey[eachTableKey].keys())[0])
                                if 'SDKToDevice' == eachTableKey:
                                    sdkVersions = read_data_from_db(eachDb, 'SELECT DISTINCT version FROM SDKs WHERE name IS "mikroSDK"')
                                    versions = filter_versions(list(v[0] for v in sdkVersions[enums.dbSync.ELEMENTS.value]))
                                    threshold_version = version.parse(eachKey[eachTableKey][collumns[1]][:-1])
                                    filtered_versions = [f'mikrosdk_v{v.replace('.','')}' for v in versions if version.parse(v) >= threshold_version]
                                    values.append(filtered_versions)
                                else:
                                    values.append(eachKey[eachTableKey][collumns[1]])
                                break
                        if list == type(values[1]):
                            for eachValue in values[1]:
                                insertIntoTable(
                                    eachDb,
                                    eachTableKey,
                                    [
                                        values[0],
                                        eachValue
                                    ],
                                    ','.join(collumns)
                                )
                        else:
                            insertIntoTable(
                                eachDb,
                                eachTableKey,
                                values,
                                ','.join(collumns)
                            )

    return

def createErpDbInfo(device):
    core_name = None
    try:
        data = json.loads(device['sdk_config'])
        core_name = data.get("CORE_NAME", "")
    except (json.JSONDecodeError, TypeError):
        core_name = ""
    if core_name == '':
        try:
            data = json.loads(device['core_info'])
            core_name = data[0].get("core_name_define", "")
        except (json.JSONDecodeError, TypeError):
            core_name = ""

    # Normalize architecture names
    if core_name.startswith('M') and 'MIPS' not in core_name and 'MICROAPTIV' not in core_name:
        core_name = 'ARM Cortex-' + core_name.replace('DSP', '').replace('EF', '')
    elif 'MIPS' in core_name or 'MICROAPTIV' in core_name or '32' in core_name:
        core_name = 'PIC32'
    elif '16' in core_name or '18' in core_name:
        core_name = 'PIC'
    elif '24' in core_name or '33' in core_name or 'DSPIC' in core_name:
        core_name = 'dsPIC'
    elif '64K' in core_name:
        core_name = 'AVR'
    elif 'RISCV' in core_name:
        core_name = 'RISC-V'

    new_family_uid = (
        device['vendor'].upper() + '_' +
        core_name.upper().replace(' ', '_').replace('-', '_').replace('+', '_PLUS') + '_' +
        device['family_uid'].upper().replace('+', '_PLUS').replace(' ', '_')
    )

    return new_family_uid, device['vendor'], core_name

def updateDevicesFromCore(dbs, queries):
    allDevicesDirs = os.listdir(queries)
    for eachDeviceDir in allDevicesDirs:
        currentDeviceDir = os.path.join(queries, eachDeviceDir)
        currentDeviceFiles = os.listdir(currentDeviceDir)

        for eachDb in dbs:
            if eachDb:
                if 'Devices.json' in currentDeviceFiles:
                    with open(os.path.join(currentDeviceDir, 'Devices.json'), 'r') as file:
                        device = json.load(file)
                    file.close()
                    values = []
                    collumns = []
                    for eachKey in device.keys():
                        collumns.append(eachKey)
                        if eachKey == 'family_uid' and 'erp_db' in eachDb:
                            device[eachKey], _, _ = createErpDbInfo(device)
                        values.append(device[eachKey])
                    insertIntoTable(
                        eachDb,
                        'Devices',
                        values,
                        ','.join(collumns)
                    )

                if 'LinkerTables.json' in currentDeviceFiles:
                    with open(os.path.join(currentDeviceDir, 'LinkerTables.json'), 'r') as file:
                        linkerTables = json.load(file)
                    file.close()
                    table_keys = [list(table.keys())[0] for table in linkerTables['tables']]
                    for eachTableKey in table_keys:
                        collumns = ['device_uid']
                        values = [linkerTables['device_uid']]
                        for eachKey in linkerTables['tables']:
                            if eachTableKey in eachKey:
                                collumns.append(list(eachKey[eachTableKey].keys())[0])
                                if 'SDKToDevice' == eachTableKey:
                                    sdkVersions = read_data_from_db(eachDb, 'SELECT DISTINCT version FROM SDKs WHERE name IS "mikroSDK"')
                                    versions = filter_versions(list(v[0] for v in sdkVersions[enums.dbSync.ELEMENTS.value]))
                                    threshold_version = version.parse(eachKey[eachTableKey][collumns[1]][:-1])
                                    filtered_versions = [f'mikrosdk_v{v.replace('.','')}' for v in versions if version.parse(v) >= threshold_version]
                                    values.append(filtered_versions)
                                # Add Packages if they are not present in the database
                                elif 'DeviceToPackage' == eachTableKey:
                                    package_uids = linkerTables['tables'][enums.dbSync.BOARDTODEVICEPACKAGES.value]['DeviceToPackage']['package_uid']
                                    for package_uid in package_uids:
                                        pin_count = package_uid.split('/')[0]
                                        package_name = package_uid.split('/')[1]
                                        insertIntoTable(
                                            eachDb,
                                            'Packages',
                                            [
                                                pin_count,
                                                package_uid,
                                                package_uid,
                                                "",
                                                '{"_MSDK_PACKAGE_NAME_":"' + package_name + '","_MSDK_DIP_SOCKET_TYPE_":""}'
                                            ],
                                            'pin_count,name,uid,stm_sdk_config,sdk_config'
                                        )
                                    values.append(eachKey[eachTableKey][collumns[1]])
                                else:
                                    values.append(eachKey[eachTableKey][collumns[1]])
                                break
                        if list == type(values[1]):
                            for eachValue in values[1]:
                                insertIntoTable(
                                    eachDb,
                                    eachTableKey,
                                    [
                                        values[0],
                                        eachValue
                                    ],
                                    ','.join(collumns)
                                )
                        else:
                            insertIntoTable(
                                eachDb,
                                eachTableKey,
                                values,
                                ','.join(collumns)
                            )

    return

def updateMCHPProgrammers(eachDb, converted_data, json_data_list):
    programmersColumns = 'uid,hidden,name,icon,installed,description,installer_package'
    debuggersColumns = 'uid,hidden,name,icon,description'
    progToDeviceColumns = 'programer_uid,device_uid,device_support_package'
    debuggerToDeviceColumns = 'debugger_uid,device_uid'

    ## Add all tools found in microchip index file to programmers table
    counter = 1
    for prog_item in converted_data:
        print("%sProg item number %s/%s : %s" % (utility.Colors.OKGREEN, counter, len(converted_data), prog_item['display_name']))
        time.sleep(3)
        counter += 1
        # TODO: uncomment for testing purposes
        # print("%sInserting %s into Programmers table" % (utility.Colors.OKCYAN, prog_item['uid']))
        dfpsMap = json.loads(prog_item['dfps'])
        insertIntoTable(
            eachDb,
            'Programmers',
            [
                prog_item['uid'],
                prog_item['hidden'],
                prog_item['display_name'],
                prog_item['icon'],
                prog_item['installed'],
                prog_item['description'],
                prog_item['installer_package']
            ],
            programmersColumns
        )
        # TODO: uncomment for testing purposes
        # print(f"Inserting {prog_item['uid']} into Debuggers table")
        dfpsMap = json.loads(prog_item['dfps'])
        insertIntoTable(
            eachDb,
            'Debuggers',
            [
                prog_item['uid'],
                prog_item['hidden'],
                prog_item['display_name'],
                prog_item['icon'],
                prog_item['description']
            ],
            debuggersColumns
        )
        ## Add MCU to Programmer mapping found in microchip index file
        missingMcuDfp = []
        for mcu in prog_item['mcus']:

            ## DebuggerToDevice Section
            has_debug = False
            element_found = False
            if mcu in json_data_list:
                for each_sub_element in json_data_list[mcu]:
                    if re.search(prog_item['uid'], each_sub_element['root_folder'], re.IGNORECASE):
                        for each_support in each_sub_element['support']:
                            if each_support.endswith('d'):
                                element_found = True
                                if each_sub_element['support'][each_support].lower() != 'no':
                                    has_debug = True
                                    break
                    if element_found:
                        break
            ## EOF DebuggerToDevice Section

            # TODO: uncomment for testing purposes
            # print(f"Inserting {mcu.upper()}:{prog_item['uid']} into ProgrammerToDevice table")
            if mcu in dfpsMap:
                exists, uid_list = read_data_from_db(eachDb, f"SELECT uid FROM Devices WHERE def_file = \"{mcu.upper()}.json\"")
                if not exists:
                    exists, uid_list = read_data_from_db(eachDb, f"SELECT uid FROM Devices WHERE def_file = \"{mcu}.json\"")
                if exists:
                    for mcu_uid in uid_list:
                        insertIntoTable(
                            eachDb,
                            'ProgrammerToDevice',
                            [
                                prog_item['uid'],
                                mcu_uid[0],
                                json.dumps(dfpsMap[mcu])
                            ],
                            progToDeviceColumns
                        )
                        if has_debug:
                            # TODO: uncomment for testing purposes
                            # print(f"Inserting {mcu.upper()}:{prog_item['uid']} into DebuggerToDevice table")
                            insertIntoTable(
                                eachDb,
                                'DebuggerToDevice',
                                [
                                    prog_item['uid'],
                                    mcu_uid[0]
                                ],
                                debuggerToDeviceColumns
                            )
            else:
                missingMcuDfp.append(mcu)
        print("%sFollowing MCUs do not have DFP: %s" % (utility.Colors.WARNING, missingMcuDfp))

def update_erp_info(erpDb, nectoDb):
    def normalize_uid(value):
        return value.upper().replace(' ', '_').replace('-', '_').replace('+', '_PLUS')

    # Rows for DeviceVendors table
    device_vendors = []
    vendors_seen = set()
    # Rows for DeviceArchitectures table
    device_architectures = []
    core_seen = set()
    # Rows for DeviceFamilies table
    device_families = []
    families_seen = set()
    # Rows for Devices table in ERP database
    erp_devices_families = []

    # Fetch info about all MCUs in the database
    sql = """SELECT DISTINCT vendor, sdk_config, family_uid, core_info, uid FROM Devices
             WHERE uid NOT LIKE '%\\_%' ESCAPE '\\'"""
    _, results = read_data_from_db(nectoDb, sql)

    for vendor, sdk_config, family_uid, core_info, uid in results:
        necto_device_info = {
            'vendor': vendor,
            'sdk_config': sdk_config,
            'family_uid': family_uid,
            'core_info': core_info
        }

        # Fetch data needed for ERP database
        family_uid, vendor_name, core_name = createErpDbInfo(necto_device_info)
        erp_devices_families.append({
            'uid': uid,
            'family_uid': family_uid
        })

        vendor_uid = normalize_uid(vendor_name)
        core_uid   = f"{vendor_uid}_{normalize_uid(core_name)}"

        # Data for DeviceVendors table
        if vendor_uid not in vendors_seen:
            vendors_seen.add(vendor_uid)
            device_vendors.append({
                'uid': vendor_uid,
                'name': vendor_name
            })

        # Data for DeviceArchitectures table
        if core_uid not in core_seen:
            core_seen.add(core_uid)
            device_architectures.append({
                'uid': core_uid,
                'name': core_name,
                'vendor_uid': vendor_uid
            })

        # Data for DeviceFamilies table
        if family_uid not in families_seen:
            families_seen.add(family_uid)
            device_families.append({
                'uid': family_uid,
                'name': necto_device_info['family_uid'],
                'architecture_uid': core_uid
            })

    # Insert data into ERP tables
    for database in [erpDb, nectoDb]:
        for row in device_vendors:
            insertIntoTable(
                database, 'DeviceVendors',
                [row['uid'], row['name']],
                'uid,name'
            )
        for row in device_architectures:
            insertIntoTable(
                database, 'DeviceArchitectures',
                [row['uid'], row['name'], row['vendor_uid']],
                'uid,name,vendor_uid'
            )
        for row in device_families:
            insertIntoTable(
                database, 'DeviceFamilies',
                [row['uid'], row['name'], row['architecture_uid']],
                'uid,name,architecture_uid'
            )

    # Condition for ERP database - as we take all the info from necto_db.db
    # family_uid there isn't applicable for ERP system, so we need to overwrite it.
    for row in erp_devices_families:
        updateTableCollumn(
            erpDb,
            'Devices',
            'family_uid',
            row['family_uid'],
            'uid',
            row['uid']
        )

def update_legacy_sdk_support(database):
    # Get the list of all Legacy sdk_uid values
    sql = """
        SELECT uid FROM SDKs
        WHERE uid LIKE "%legacy%"
    """
    numOfElements, results = read_data_from_db(database, sql)

    sdk_uids = [row[0] for row in results]

    # Iterate through legacy SDK uids
    for sdk_uid in sdk_uids:
        # Get all MCUs that have current legacy SDK support as a list
        sql = f"""
        SELECT DISTINCT device_uid FROM SDKToDevice
        WHERE sdk_uid == '{sdk_uid}'
        AND device_uid NOT LIKE "%\\_%" ESCAPE '\\';
        """
        numOfElements, results = read_data_from_db(database, sql)

        current_legacy_sdk_device_uids = [row[0] for row in results]

        # Get all Cards that don't have current legacy SDK support as a list
        sql = f"""
        SELECT DISTINCT device_uid FROM SDKToDevice
        WHERE sdk_uid != '{sdk_uid}'
        AND device_uid LIKE "%\\_%" ESCAPE '\\';
        """
        numOfElements, results = read_data_from_db(database, sql)

        current_card_device_uids = [row[0] for row in results]

        # Add current legacy SDK support for the Cards which MCUs have this legacy SDK support
        for device_uid in current_legacy_sdk_device_uids:
            for card_device_uid in current_card_device_uids:
                if device_uid.lower() in card_device_uid.lower():
                    insertIntoTable(database, 'SDKToDevice', [card_device_uid, sdk_uid], 'device_uid, sdk_uid')
                    # TODO - uncomment for testing purposes
                    # print(f"Added {sdk_uid} support for {card_device_uid}")

        # Get all Boards that don't have current legacy SDK support,
        # but that have Devices with this legacy SDK support
        sql = f"""
        SELECT DISTINCT SDKToBoard.board_uid, '{sdk_uid}'
        FROM SDKToBoard
        INNER JOIN BoardToDevice
            ON BoardToDevice.board_uid = SDKToBoard.board_uid
        INNER JOIN SDKToDevice
            ON SDKToDevice.device_uid = BoardToDevice.device_uid
        WHERE SDKToDevice.sdk_uid = '{sdk_uid}'
        AND SDKToBoard.sdk_uid != '{sdk_uid}';
        """
        numOfElements, results = read_data_from_db(database, sql)
        board_uids = [row[0] for row in results]
        for board_uid in board_uids:
            insertIntoTable(database, 'SDKToBoard', [board_uid, sdk_uid], 'board_uid, sdk_uid')
            # TODO - uncomment for testing purposes
            # print(f"Added {sdk_uid} support for {board_uid}")

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

def compare_hashes(dir1, dir2):
    hash_dir1 = hash_directory_contents(dir1)
    hash_dir2 = hash_directory_contents(dir2)
    return hash_dir1 == hash_dir2

def copy_folder_contents(source_folder, destination_folder):
    # Ensure the source folder exists
    if not os.path.exists(source_folder):
        print(f"The source folder '{source_folder}' does not exist.")
        return

    # Ensure the destination folder exists, create it if it doesn't
    if not os.path.exists(destination_folder):
        os.makedirs(destination_folder)

    # Copy the contents of the source folder to the destination folder
    for item in os.listdir(source_folder):
        source_path = os.path.join(source_folder, item)
        destination_path = os.path.join(destination_folder, item)

        if os.path.isdir(source_path):
            shutil.copytree(source_path, destination_path)
        else:
            shutil.copy2(source_path, destination_path)

    print(f"Contents of '{source_folder}' have been copied to '{destination_folder}'.")

def fix_icon_names(db, tableName):
    if db:
        numElements, elements = read_data_from_db(db, f'SELECT * FROM {tableName} WHERE icon NOT REGEXP "^images/boards/board-.+|images/boards/board.png$|images/displays/no_display.png$|images/displays/display-.+"')
        if numElements:
            for eachElement in elements:
                newString = eachElement[2].replace(f"boards/", "boards/board-")
                if 'displays' in eachElement[2]:
                    newString = eachElement[2].replace(f"displays/", "displays/display-")
                updateTableCollumn(
                    db,
                    tableName,
                    "icon",
                    newString,
                    "uid",
                    eachElement[0]
                )

def log_step(message):
    elapsed = time.perf_counter() - START_TIME
    total = int(elapsed)
    minutes = total // 60
    seconds = total % 60
    print(f'\033[0m[{minutes:02d}:{seconds:02d}] {message}')

## Main runner
async def main(
    token, repo, doc_codegrip, doc_mikroprog,
    release_version="", release_version_sdk="", index="Test", mcus_only=True
):
    start = time.perf_counter()
    global entranceCheckProg
    global entranceCheckDebug
    ## Step 1 - download the database first
    ## Always use latest release
    dbName = 'necto_db_dev'
    dbPackageName = 'database_dev'
    if 'Live' == index:
        dbName = 'necto_db'
        dbPackageName = 'database'
    log_step('\033[96mStep 1: Downloading the database.\033[0m')
    databaseNecto, databaseErp = downloadDb(
        ## Always download database from latest release
        f'https://github.com/MikroElektronika/core_packages/releases/latest/download/{dbPackageName}.7z',
        False
    )

    ## Step 2 - Update database with new SDK if needed
    ## Add new sdk version
    if 'latest' == release_version_sdk:
        release_version_sdk = fetch_release_details('MikroElektronika/mikrosdk_v2', token, release_version_sdk)['tag_name']

    for eachDb in [databaseNecto, databaseErp]:
        if eachDb:
            log_step(f'\033[96mStep 2: Checking if {release_version_sdk} is present in {eachDb}.\033[0m')
            sdkVersionUidNew, sdkVersionUidPrevious = sdk.addSdkVersion(eachDb, release_version_sdk.replace('mikroSDK-', ''))
    ## Make sure to check if it exists already, so as not to add again
    if sdkVersionUidNew:
        ## Add data to tables
        for eachDb in [databaseNecto, databaseErp]:
            if eachDb:
                sdk.insertIntoSdk(
                    eachDb,
                    [
                        'SDKToBoard',
                        'SDKToBuildSystem',
                        'SDKToCompiler',
                        'SDKToDevice',
                        'SDKToDisplay'
                    ],
                    [
                        'board_uid',
                        'build_system_uid',
                        'compiler_uid',
                        'device_uid',
                        'display_uid'
                    ],
                    sdkVersionUidPrevious,
                    sdkVersionUidNew
                )
    ## EOF Step 2

    ## Step 3 - Update database with mikroSDK settings
    if release_version_sdk:
        if not mcus_only:
            sdkQueriesPath = os.path.join(os.path.dirname(__file__), 'tmp/queries')
            sdkMetadataPath = os.path.join(os.path.dirname(__file__), 'tmp/metadata.json')
            ghPath = f'download/{release_version_sdk}'
            if "latest" == release_version_sdk:
                ghPath = 'latest/download'
            if not os.path.exists(sdkQueriesPath):
                utility.extract_archive_from_url(
                    f'https://github.com/MikroElektronika/mikrosdk_v2/releases/{ghPath}/queries.7z',
                    sdkQueriesPath, token
                )
            if not os.path.isfile(sdkMetadataPath):
                utility.download_file_from_link(
                    f'https://github.com/MikroElektronika/mikrosdk_v2/releases/{ghPath}/metadata.json',
                    sdkMetadataPath, token
                )
            if os.path.exists(os.path.join(sdkQueriesPath, 'boards')):
                updateBoardsFromSdk([databaseErp, databaseNecto], os.path.join(sdkQueriesPath, 'boards')) ## If any new boards were added
            if os.path.exists(os.path.join(sdkQueriesPath, 'cards')):
                updateDevicesFromSdk([databaseErp, databaseNecto], os.path.join(sdkQueriesPath, 'cards')) ## If any new mcu cards were added

            ## This part adds package dependencies for each board present in mikroSDK
            jsonFile = json.load(open(sdkMetadataPath, 'r'))['packages']
            for eachDb in [databaseErp, databaseNecto]:
                if eachDb:
                    log_step(f'\033[96mStep 3.1: Adding info for new Boards into {eachDb}.\033[0m')
                    addCollumnsToTable(
                        eachDb, ['installer_package'], 'Boards', ['Text'], ['NoDefault']
                    )
                    for eachBoard in jsonFile:
                        updateTableCollumn(
                            eachDb, None, None, None, None, None, jsonFile[eachBoard]['db_query']
                        )

    ## Always add MCU information stored in CORE repo
    coreQueriesPath = os.path.join(os.getcwd(), 'resources/queries')
    if os.path.exists(os.path.join(coreQueriesPath, 'mcus')):
        log_step(f'\033[96mStep 3.2: Adding info for new Devices into {[databaseErp, databaseNecto]}.\033[0m')
        updateDevicesFromCore([databaseErp, databaseNecto], os.path.join(coreQueriesPath, 'mcus'))
    ## EOF Step 3

    ## Step 4 - add missing collumns to tables
    if not mcus_only:
        if databaseErp:
            log_step('\033[96mStep 4: Adding extra columns for ERP database.\033[0m')
            addCollumnsToTable(
                databaseErp, ['pid'], 'Boards', ['VARCHAR(50)'], ['NoDefault']
            )
            addCollumnsToTable(
                databaseErp, ['package_uid'], 'BoardToDevice', ['TEXT'], ['NoDefault']
            )
            addCollumnsToTable(
                databaseErp, ['pid', 'graphic_tool'], 'Compilers', ['VARCHAR(50)', 'BOOLEAN'], ['NoDefault', 0]
            )
    ## EOF Step 4

    ## Step 5 - select all unique devices from github database
    if not mcus_only:
        log_step('\033[96mStep 5: Fetching all unique devices from the database.\033[0m')
        allDevicesGithub = read_data_from_db(
            databaseNecto, 'SELECT DISTINCT uid, def_file FROM Devices'
        )
    ## EOF Step 5

    ## Step 6 - add any missing MCU device details
    if not mcus_only:
        for eachDb in [databaseNecto, databaseErp]:
            if eachDb:
                log_step(f'\033[96mStep 6: Adding missing DeviceDetails rows to {eachDb}.\033[0m')
                checkDeviceDetails(eachDb, allDevicesGithub)
    ## EOF Step 6

    ## Step 7 - add any missing package_uid to BoardToDevice
    if not mcus_only:
        if databaseErp:
            log_step(f'\033[96mStep 7: Adding missing BoardToDevice rows to {databaseErp}.\033[0m')
            checkDevicePackages(databaseErp, allDevicesGithub)
    ## EOF Step 7

    ## Step 8 - clear any empty rows from BoardToDevice
    if not mcus_only:
        if databaseErp:
            log_step(f'\033[96mStep 8: Clearing empty BoardToDevice rows in {databaseErp}.\033[0m')
            clearDevicePackages(databaseErp)
    ## EOF Step 8

    ## Step 9 - synchronize programmers for all devices - CODEGRIP first
    if not mcus_only:
        progDbgAsJson = getProgDbgAsJson(
            doc_codegrip,
            True
        )
        if databaseErp:
            log_step(f'\033[96mStep 9.1: Adding CODEGRIP packs information into ProgrammerToDevice for {databaseErp}.\033[0m')
            checkProgrammerToDevice(databaseErp, allDevicesGithub, progDbgAsJson, True)
            log_step(f'\033[96mStep 9.2: Adding CODEGRIP packs information into DebuggerToDevice for {databaseErp}.\033[0m')
            checkDebuggerToDevice(databaseErp, allDevicesGithub, progDbgAsJson, False)
            entranceCheckProg, entranceCheckDebug = True,True
        log_step(f'\033[96mStep 9.1: Adding CODEGRIP packs information into ProgrammerToDevice for {databaseNecto}.\033[0m')
        checkProgrammerToDevice(databaseNecto, allDevicesGithub, progDbgAsJson, True)
        log_step(f'\033[96mStep 9.2: Adding CODEGRIP packs information into DebuggerToDevice for {databaseNecto}.\033[0m')
        checkDebuggerToDevice(databaseNecto, allDevicesGithub, progDbgAsJson, False)
    ## EOF Step 9

    ## Step 10 - syncronize programmers for all devices - mikroProg next
    if not mcus_only:
        progDbgAsJson = getProgDbgAsJson(
            f'https://docs.google.com/spreadsheets/d/{doc_mikroprog}/export?format=csv',
            True
        )
        if databaseErp:
            log_step(f'\033[96mStep 10.1: Adding MikroProg packs information into ProgrammerToDevice for {databaseErp}.\033[0m')
            checkProgrammerToDevice(databaseErp, allDevicesGithub, progDbgAsJson, True)
            log_step(f'\033[96mStep 10.2: Adding MikroProg packs information into DebuggerToDevice for {databaseErp}.\033[0m')
            checkDebuggerToDevice(databaseErp, allDevicesGithub, progDbgAsJson, False)
        log_step(f'\033[96mStep 10.1: Adding MikroProg packs information into ProgrammerToDevice for {databaseNecto}.\033[0m')
        checkProgrammerToDevice(databaseNecto, allDevicesGithub, progDbgAsJson, True)
        log_step(f'\033[96mStep 10.2: Adding MikroProg packs information into DebuggerToDevice for {databaseNecto}.\033[0m')
        checkDebuggerToDevice(databaseNecto, allDevicesGithub, progDbgAsJson, False)
    ## EOF Step 10

    ## Step 11 add microchip info to programmers table
    custom_link = 'https://packs.download.microchip.com/index.idx'
    if not mcus_only:
        # Download the index file
        xml_content = MCHP.download_index_file(custom_link)
        converted_data, item_list_unused = MCHP.convert_idx_to_json(xml_content)

        ## Fetch all DFP TP packs from Microchips website
        dfp_links = fetch_latest_package_links(xmltodict.parse(xml_content))
        dfp_file_path = os.path.join(os.path.dirname(__file__), 'tmp/dfp_packs')
        os.makedirs(dfp_file_path, exist_ok=True)
        ## Download and extract all found tool packs
        for link in dfp_links:
            url = urlparse(link)
            pack_name = os.path.basename(url.path)
            pack_path=os.path.join(dfp_file_path, utility.drop_extension(pack_name))
            if not os.path.exists(pack_path):
                utility.extract_archive_from_url(
                    url=link,
                    destination=pack_path
                )
        ## Gather all 'device_support.xml' content into one dictionary
        json_data_list = find_and_convert_xml_files(dfp_file_path)

        for eachDb in [databaseErp, databaseNecto]:
            if eachDb:
                log_step(f'\033[96mStep 11: Adding MCHP packs information into {eachDb}.\033[0m')
                ## Add missing columns to programmer table
                addCollumnsToTable(
                    eachDb, ['installer_package'], 'Programmers', ['Text'], ['NoDefault']
                )
                addCollumnsToTable(
                    eachDb, ['device_support_package'], 'ProgrammerToDevice', ['Text'], ['NoDefault']
                )
                updateMCHPProgrammers(eachDb, converted_data, json_data_list)
    ## EOF Step 11

    ## Step 12 - add legacy SDK support for Boards and Cards that should have it
    if not mcus_only:
        for eachDb in [databaseErp, databaseNecto]:
            if eachDb:
                log_step(f'\033[96mStep 12: Adding legacy SDK support into {eachDb}.\033[0m')
                update_legacy_sdk_support(eachDb)
    ## EOF Step 12

    ## Step 13 - update families
    if not mcus_only:
        if databaseErp:
            ## Add information into ERP db needed for the Web Site
            log_step(f'\033[96mStep 13: Adding ERP-applicable info into databases.\033[0m')
            update_erp_info(databaseErp, databaseNecto)
    ## EOF Step 13

    ## Step 14 - update the icon names
    if not mcus_only:
        for eachDb in [databaseErp, databaseNecto]:
            log_step(f'\033[96mStep 14: Checking image names in {eachDb}.\033[0m')
            fix_icon_names(eachDb, "Boards")
            fix_icon_names(eachDb, "Displays")
    ## EOF Step 14

    ## Step 15 - if queries are different, add them to new file
    if not mcus_only:
        log_step('\033[96mStep 15: Checking if there are any changes to queries.\033[0m')
        if not compare_hashes(
            os.path.join(os.path.dirname(__file__), 'databases/queries'),
            os.path.join(os.path.dirname(os.getcwd()), 'utils/databases/queries')
        ):
            ## Hashes are different, so copy new files here
            copy_folder_contents(
                os.path.join(os.getcwd(), 'utils/databases/queries'),
                os.path.join(os.path.dirname(__file__), 'databases/queries')
            )
    ## EOF Step 15

    ## Step 16 - re-upload over existing assets
    if not mcus_only:
        log_step('\033[96mStep 16: Uploading database archive.\033[0m')
        archive_path = compress_directory_7z(os.path.join(os.path.dirname(__file__), 'databases'), f'{dbPackageName}.7z')
        async with aiohttp.ClientSession() as session:
            upload_result = await upload_release_asset(session, token, repo, archive_path, release_version)
        if databaseErp:
            log_step('\033[96mStep 16: Uploading ERP database file.\033[0m')
            async with aiohttp.ClientSession() as session:
                upload_result = await upload_release_asset(session, token, repo, databaseErp, release_version)
    ## EOF Step 16

    ## Step 17 - overwrite the existing necto_db.db in root with newly generated one
    log_step(f'\033[96mStep 17: Overwriting {dbName} file.\033[0m')
    shutil.copy2(databaseNecto, os.path.join(os.getcwd(), f'{dbName}.db'))
    ## EOF Step 17
    ## ------------------------------------------------------------------------------------ ##
## EOF Main runner

if __name__ == "__main__":
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

    # Then, check for arguments passed
    parser = argparse.ArgumentParser(description='')
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument('doc_codegrip', type=str, help='Spreadsheet table download link.')
    parser.add_argument('doc_mikroprog', type=str, help='Spreadsheet table download link.')
    parser.add_argument('specific_tag', type=str, help='Specific release tag for database update.', default="")
    parser.add_argument('specific_tag_mikrosdk', type=str, help='Specific release tag from mikrosdk for database update.', default="")
    parser.add_argument('index', type=str, help='Index selection - Live/Test.', default="Test")
    parser.add_argument('--mcus_only', type=str2bool, help='If True - will upload asset.', default=False)

    ## Parse the arguments
    args = parser.parse_args()

    ## Run the main code
    asyncio.run(
        main(
            args.token, args.repo,
            args.doc_codegrip, args.doc_mikroprog,
            args.specific_tag, args.specific_tag_mikrosdk,
            args.index, args.mcus_only
        )
    )
