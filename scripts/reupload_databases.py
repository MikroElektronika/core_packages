import os, re, sys, \
       shutil, argparse, \
       sqlite3, json, \
       asyncio, aiohttp, \
       subprocess, aiofiles
from pathlib import Path

## Import utility modules
## Append to system path
sys.path.append(str(Path(os.path.dirname(__file__)).parent.parent.absolute()))
sys.path.append(str(Path(os.path.dirname(__file__)).absolute()))

import enums as enums
import support as utility

entranceCheckProg = True
entranceCheckDebug = True

mcuCardCheckList = [
    'CARD', 'SIBRAIN', 'MICROMOD', 'PIM'
]

def functionRegex(value, pattern):
    c_pattern = re.compile(r"\b" + pattern.lower() + r"\b")
    return c_pattern.search(value) is not None

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

def updateTableCollumn(db, table, collumn, setNewValue, collumnIf, collumnIfValue):
    import sqlite3

    conn = sqlite3.connect(db)
    cur = conn.cursor()
    cur.execute(f'UPDATE {table} SET {collumn} = "{setNewValue}" WHERE {collumnIf} = "{collumnIfValue}"')
    conn.commit()
    conn.close()

## Download databases or fetch from disk
def downloadDb(downloadLink, overwrite=True):
    dbPath = None
    dbPath2 = None
    if 'http' in downloadLink:
        if '.7z' in downloadLink:
            dbPath1 = os.path.join(os.path.dirname(__file__), "databases/necto_db.db")
            dbPath2 = os.path.join(os.path.dirname(__file__), "erp_db.db")
            if overwrite or not os.path.isfile(dbPath1):
                utility.extract_archive_from_url(
                    downloadLink, os.path.join(os.path.dirname(__file__), "databases")
                )
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
            if not currentDevice[0]:
                insertIntoTable(
                    db,
                    'DeviceDetails',
                    [
                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value], ## uid
                        False, ## graphic_mcu
                        '', ## notes
                        '', ## datasheet_url TODO - proslediti uvek link ka sajtu
                        any(element in eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value] for element in mcuCardCheckList),
                        '' ## device_uid
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
                        print("Added %s/%s/%s to database BoardToDevice table.\n" % ((boardValues[enums.dbSync.BOARDTODEVICEBOARD.value], boardValues[enums.dbSync.BOARDTODEVICEDEVICE.value], packageString)))
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
    data_dict = df.set_index('Name').to_dict(orient='index')
    formatted_dict = {mcu: data for mcu, data in data_dict.items()}
    if os.path.exists(os.path.join(os.path.dirname(__file__), "devices.txt")):
        os.remove(os.path.join(os.path.dirname(__file__), "devices.txt"))

    if saveToFile:
        import json
        with open(os.path.join(os.path.dirname(__file__), 'devices.json'), 'w') as json_file:
            json_file.write(json.dumps(formatted_dict, indent=4))

    return formatted_dict

def checkProgrammerToDevice(database, devices, progDbgInfo, addGeneral=False):
    ProgrammerToDeviceColumns = 'programer_uid, device_uid'

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
            print("Removed %s from database ProgrammerToDevice table.\n" % eachProgUid)

    for eachDevice in devices[enums.dbSync.ELEMENTS.value]:
        if eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '') in progDbgInfo:
            for eachProgCheckKey in progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '')].keys():
                if re.search('Programmers',eachProgCheckKey):
                    if progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '')][eachProgCheckKey]:
                        splitProgsDebuggers = progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '')][eachProgCheckKey].split('/')
                        for eachProgDebug in splitProgsDebuggers:
                            progDebugUid = read_data_from_db(
                                database,
                                f'SELECT uid FROM Programmers WHERE name IS "{eachProgDebug}"'
                            )
                            if progDebugUid[enums.dbSync.COUNT.value]:
                                insertIntoTable(
                                    database,
                                    'ProgrammerToDevice',
                                    [
                                        progDebugUid[enums.dbSync.ELEMENTS.value][0][enums.dbSync.PROGRAMMERTODEVICEPROGRAMMER.value], ## programer_uid
                                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value] ## device_uid
                                    ],
                                    ProgrammerToDeviceColumns
                                )
                                print(
                                    "Added %s/%s to database ProgrammerToDevice table.\n" %
                                    (
                                        progDebugUid[enums.dbSync.ELEMENTS.value][0][enums.dbSync.PROGRAMMERTODEVICEPROGRAMMER.value],
                                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]
                                    )
                                )
        ## Always add gdb_general?
        if addGeneral:
            insertIntoTable(
                database,
                'ProgrammerToDevice',
                [
                    'gdb_general', ## programer_uid
                    eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value] ## device_uid
                ],
                ProgrammerToDeviceColumns
            )
            print("Added gdb_general/%s to database ProgrammerToDevice table.\n" % eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value])
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
            print("Removed %s from database DebuggerToDevice table.\n" % eachProgUid)

    for eachDevice in devices[enums.dbSync.ELEMENTS.value]:
        if eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '') in progDbgInfo:
            for eachProgCheckKey in progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '')].keys():
                if re.search('Debuggers',eachProgCheckKey):
                    if progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '')][eachProgCheckKey]:
                        splitProgsDebuggers = progDbgInfo[eachDevice[enums.dbSync.DEVICETOPACKAGEDEF.value].replace('.json', '')][eachProgCheckKey].split('/')
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
                                        progDebugUid[enums.dbSync.ELEMENTS.value][0][enums.dbSync.PROGRAMMERTODEVICEPROGRAMMER.value].split('_')[0], ## debugger_uid
                                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value] ## device_uid
                                    ],
                                    DebuggerToDeviceColumns
                                )
                                print(
                                    "Added %s/%s to database DebuggerToDevice table.\n" %
                                    (
                                        progDebugUid[enums.dbSync.ELEMENTS.value][0][enums.dbSync.PROGRAMMERTODEVICEPROGRAMMER.value].split('_')[0],
                                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]
                                    )
                                )
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
            print("Added gdb_general/%s to database ProgrammerToDevice table.\n" % eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value])
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
            print("Added %s collumn (type %s) to %s table. (Default value - %s)\n" % (eachCollumn, eachType, table, defaultValue))
    return

def update_families(database, allDevicesGithub):
    familyId = 1 ## Location of family_uid in collumns
    sdkConfigId = 7 ## Location of sdk_config in collumns
    with open(os.path.join(os.path.dirname(__file__), 'families.json'), 'r') as file:
        familiesJson = json.load(file)
    file.close()
    if allDevicesGithub[enums.dbSync.COUNT.value]:
        for eachDevice in allDevicesGithub[enums.dbSync.ELEMENTS.value]:
            fullDevice = read_data_from_db(
                database, f'SELECT * FROM Devices WHERE uid IS "{eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]}"'
            )
            for eachFamily in familiesJson['Familije']:
                newFamilyName = None
                familyCheck = eachFamily['Name']
                if 'Kinetis' in eachFamily['Name']:
                    familyCheck = eachFamily['Name'].replace(' ', '_')
                if familyCheck.lower() == fullDevice[1][0][familyId].lower():
                    if re.search('STM32|^MK.+', fullDevice[1][0][0]):
                        core_name = None
                        if fullDevice[1][0][sdkConfigId]:
                            sdkConfigFull = json.loads(fullDevice[1][0][sdkConfigId])
                            core_name = sdkConfigFull.get('CORE_NAME')
                        if core_name:
                            if core_name.endswith('EF'):
                                core_name = core_name[:-2]
                            if core_name.endswith('DSP'):
                                core_name = core_name[:-3]
                            if re.search(core_name, eachFamily['Architecture']):
                                newFamilyName = f'{eachFamily['Vendor']}_{eachFamily['Architecture']}_{eachFamily['Name']}'
                            else:
                                continue
                        else:
                            continue
                    else:
                        newFamilyName = f'{eachFamily['Vendor']}_{eachFamily['Architecture']}_{eachFamily['Name']}'
                if newFamilyName:
                    print('Updated %s with new family value.\n' % eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value])
                    updateTableCollumn(
                        database,
                        'Devices',
                        'family_uid',
                        newFamilyName.upper().replace(' ', '_').replace('-', '_'),
                        'uid',
                        eachDevice[enums.dbSync.DEVICETOPACKAGEUID.value]
                    )
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

async def upload_release_asset(session, token, repo, asset_path):
    """ Upload a release asset to GitHub """
    print(f"Preparing to upload asset: {os.path.basename(asset_path)}...")
    headers = {'Authorization': f'token {token}', 'Content-Type': 'application/octet-stream'}
    release_url = f"https://api.github.com/repos/{repo}/releases/latest"
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

## Main runner
async def main(token, repo):
    ## Step 1 - if links passed, download the database first
    databaseNecto, databaseErp = downloadDb(
        ## Always download database from latest release
        'https://github.com/MikroElektronika/core_packages/releases/latest/download/database.7z',
        False
    )

    ## Step 2 - add missing collumns to tables
    addCollumnsToTable(
        databaseErp, ['pid'], 'Boards', ['VARCHAR(50)'], ['NoDefault']
    )
    addCollumnsToTable(
        databaseErp, ['package_uid'], 'BoardToDevice', ['TEXT'], ['NoDefault']
    )
    addCollumnsToTable(
        databaseErp, ['pid', 'graphic_tool'], 'Compilers', ['VARCHAR(50)', 'BOOLEAN'], ['NoDefault', 0]
    )

    ## Step 3 - select all unique devices from github database
    allDevicesGithub = read_data_from_db(
        databaseNecto, 'SELECT DISTINCT uid, def_file FROM Devices'
    )

    ## Step 4 - add any missing mcu device details
    checkDeviceDetails(databaseErp, allDevicesGithub)

    ## Step 5 - add any missing package_uid to BoardToDevice
    checkDevicePackages(databaseErp, allDevicesGithub)

    ## Step 6 - clear any empty rows from BoardToDevice
    clearDevicePackages(databaseErp)

    ## Step 7 - syncronize programmers for all devices - CODEGRIP first
    progDbgAsJson = getProgDbgAsJson(
        f'https://docs.google.com/spreadsheets/d/{args.progDbgDocIdCodegrip}/export?format=csv',
        True
    )
    checkProgrammerToDevice(databaseErp, allDevicesGithub, progDbgAsJson, True)
    checkDebuggerToDevice(databaseErp, allDevicesGithub, progDbgAsJson, False)
    checkProgrammerToDevice(databaseNecto, allDevicesGithub, progDbgAsJson, True)
    checkDebuggerToDevice(databaseNecto, allDevicesGithub, progDbgAsJson, False)

    ## Step 8 - syncronize programmers for all devices - mikroProg next
    progDbgAsJson = getProgDbgAsJson(
        f'https://docs.google.com/spreadsheets/d/{args.progDbgDocIdMikroProg}/export?format=csv',
        True
    )
    checkProgrammerToDevice(databaseErp, allDevicesGithub, progDbgAsJson, True)
    checkDebuggerToDevice(databaseErp, allDevicesGithub, progDbgAsJson, False)
    checkProgrammerToDevice(databaseNecto, allDevicesGithub, progDbgAsJson, True)
    checkDebuggerToDevice(databaseNecto, allDevicesGithub, progDbgAsJson, False)

    ## Step 9 - update families
    update_families(databaseErp, allDevicesGithub)

    ## Step 10 - re-upload over existing asset
    archive_path = compress_directory_7z(os.path.join(os.path.dirname(__file__), 'databases'), 'database.7z')
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, archive_path)
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, databaseErp)
    ## ------------------------------------------------------------------------------------ ##
## EOF Main runner

if __name__ == "__main__":
# First, check for arguments passed
    parser = argparse.ArgumentParser(description='')
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument('progDbgDocIdCodegrip', type=str, help='Spreadsheet table download link.')
    parser.add_argument('progDbgDocIdMikroProg', type=str, help='Spreadsheet table download link.')

    ## Parse the arguments
    args = parser.parse_args()

    ## Run the main code
    asyncio.run(main(args.token, args.repo))
