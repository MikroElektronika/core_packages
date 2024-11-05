import os, re, sys, \
       shutil, argparse, \
       sqlite3, json, \
       asyncio, aiohttp, \
       subprocess, aiofiles
from pathlib import Path
from packaging import version

## Import utility modules
## Append to system path
sys.path.append(str(Path(os.path.dirname(__file__)).parent.parent.absolute()))
sys.path.append(str(Path(os.path.dirname(__file__)).absolute()))

import enums as enums
import support as utility

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

def deleteFromTable(db, sql_query):
    try:
        sqliteConnection = sqlite3.connect(db)
        cursor = sqliteConnection.cursor()

        ## Create the REGEXP function to be used in DB
        sqliteConnection.create_function("REGEXP", 2, functionRegex)

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

    ## Create the REGEXP function to be used in DB
    conn.create_function("REGEXP", 2, functionRegex)

    if customQuery:
        cur.execute(customQuery)
    else:
        cur.execute(f'UPDATE {table} SET {collumn} = "{setNewValue}" WHERE {collumnIf} REGEXP "{collumnIfValue}"')
    conn.commit()
    conn.close()

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

def setSDKToDeviceInDb(dbs, regex, ai_sdk):
    for eachDb in dbs:
        if eachDb:
            updateTableCollumn(
                eachDb,
                "Devices",
                "sdk_support",
                1,
                "uid",
                regex
            )
            if ai_sdk:
                query = '''UPDATE Devices SET sdk_config = REPLACE(sdk_config, '}', ',"AI_GENERATED_SDK":"True"}') WHERE uid REGEXP "''' + regex + '"'
                updateTableCollumn(
                    eachDb,
                    None,
                    None,
                    None,
                    None,
                    None,
                    query
                    )


    return

def removeDeviceFromDb(dbs, regex):
    for eachDb in dbs:
        if eachDb:
            deleteFromTable(
                eachDb,
                f'''
                DELETE FROM Devices
                WHERE uid REGEXP "{regex}";
                '''
            )

    return

## Main runner
async def main(token, repo, index="Test", action="Set SDKToDevice", regex="", ai_sdk=False):
    ## Download the database first
    ## Always use latest release
    dbName = 'necto_db_dev'
    dbPackageName = 'database_dev'
    if "Live" == index:
        dbName = 'necto_db'
        dbPackageName = 'database'
    databaseNecto, databaseErp = downloadDb(
        ## Always download database from latest release
        f'https://github.com/MikroElektronika/core_packages/releases/latest/download/{dbPackageName}.7z',
        False
    )

    ## Update database with requested settings
    if "Set SDKToDevice" == action:
        setSDKToDeviceInDb([databaseErp, databaseNecto], regex, ai_sdk)
    else:
        removeDeviceFromDb([databaseErp, databaseNecto], regex)

    ## Reupload databases over existing assets
    archive_path = compress_directory_7z(os.path.join(os.path.dirname(__file__), 'databases'), f'{dbPackageName}.7z')
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, archive_path, release_version)
    if databaseErp:
        async with aiohttp.ClientSession() as session:
            upload_result = await upload_release_asset(session, token, repo, databaseErp, release_version)

    ## Step 16 - overwrite the existing necto_db.db in root with newly generated one
    shutil.copy2(databaseNecto, os.path.join(os.getcwd(), f'{dbName}.db'))
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

    # First, check for arguments passed
    parser = argparse.ArgumentParser(description='')
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument('index', type=str, help='Index selection - Live/Test.', default="Test")
    parser.add_argument('action', type=str, help='Action selection - Remove/Update Devices.', default="Set SDKToDevice")
    parser.add_argument('regex', type=str, help='Regex for Devices that need to be updated.', default="")
    parser.add_argument('--ai_sdk', type=str2bool, help='If True - will add AI_GENERATED field to sdk_config.', default=False)

    ## Parse the arguments
    args = parser.parse_args()

    ## Run the main code
    asyncio.run(
        main(
            args.token, args.repo,
            args.index, args.action,
            args.regex, args.ai_sdk
        )
    )
