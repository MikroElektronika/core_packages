import os, re, sys, \
       shutil, argparse, \
       sqlite3

from pathlib import Path

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

## Download databases or fetch from disk
def downloadDb(downloadLink, overwrite=True):
    dbPath = None
    if 'http' in downloadLink:
        if '.7z' in downloadLink:
            dbPath = os.path.join(os.path.dirname(__file__), "dbGithub.db")
            if overwrite or not os.path.isfile(dbPath):
                utility.extract_archive_from_url(
                    downloadLink, os.path.join(os.path.dirname(__file__), "dbGithub")
                )
                shutil.move(
                    os.path.join(os.path.dirname(__file__), "dbGithub/necto_db.db"),
                    os.path.join(os.path.dirname(__file__), "dbGithub.db")
                )
            if os.path.exists(os.path.join(os.path.dirname(__file__), "dbGithub")):
                shutil.rmtree(os.path.join(os.path.dirname(__file__), "dbGithub"))
    else:
        dbPath = downloadLink ## Assume it is a local literal path

    return dbPath

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

def addSdkVersion(database, sdkVersion):
    sdkVersionUid = None
    sdkVersionUidPrevious = None
    isSdkVersionPresent = read_data_from_db(
        database, f'SELECT DISTINCT uid, version FROM SDKs WHERE version = "{sdkVersion}"'
    )
    if not isSdkVersionPresent[enums.dbSync.COUNT.value]:
        SDKsCollumns = 'uid, sdk_development_kit, name, legacy, icon, version, installed'
        insertIntoTable(
            database,
            'SDKs',
            [
                f'mikrosdk_v{sdkVersion.replace('.','')}',
                0,
                'mikroSDK',
                0,
                'images/mikrosdk.png',
                sdkVersion,
                0
            ],
            SDKsCollumns
        )
        sdkVersionUid = f'mikrosdk_v{sdkVersion.replace('.','')}'

        sdkVersions = read_data_from_db(
            database, f'SELECT DISTINCT version FROM SDKs WHERE name IS "mikroSDK"'
        )

        versionList = []
        for eachSdkVersion in sdkVersions[enums.dbSync.ELEMENTS.value]:
            versionList.append(eachSdkVersion[0])
        currentVersion, previousVersion = get_highest_and_second_highest(filter_versions(versionList))
        sdkVersionUidPrevious = read_data_from_db(
            database, f'SELECT uid FROM SDKs WHERE version = "{previousVersion}"'
        )[enums.dbSync.ELEMENTS.value][0][0]

    return sdkVersionUid, sdkVersionUidPrevious

def insertIntoSdk(database, tableName, tableCollumn, sdkUidPrevious, sdkUidNew):
    for eachTable, eachUid in zip(tableName, tableCollumn):
        allFoundValues = read_data_from_db(
            database, f'SELECT * FROM {eachTable} WHERE sdk_uid = "{sdkUidPrevious}"'
        )
        for eachValue in allFoundValues[enums.dbSync.ELEMENTS.value]:
            formattedMessage = 'Inserted %s into %s table.\n' % (eachValue[enums.dbSync.ELEMENTS.value],eachTable)
            print(formattedMessage)
            insertIntoTable(
                database,
                eachTable,
                [
                    sdkUidNew,
                    eachValue[enums.dbSync.ELEMENTS.value]
                ],
                f'sdk_uid, {eachUid}'
            )

## Main runner
if __name__ == "__main__":
    # First, check for arguments passed
    parser = argparse.ArgumentParser(description='')
    parser.add_argument(
        '--sdkVersionByTag',
        type=str,
        default='',
        help='GITHUB tag name used for SDK version.'
    )

    ## Parse the arguments
    args = parser.parse_args()

    ## Step 1 - if links passed, download the database first
    database = downloadDb(
        ## Always download database from latest release
        'https://github.com/MikroElektronika/core_packages/releases/latest/download/database.7z',
        False
    )

    ## Step 2 - add new sdk version
    sdkVersionUidNew, sdkVersionUidPrevious = addSdkVersion(database, args.sdkVersionByTag)
    ## Make sure to check if it exists already
    if not sdkVersionUidNew:
        raise ValueError('mikroSDK %s already exists in current database!' % args.sdkVersionByTag)

    ## Step 3 - add data to tables
    insertIntoSdk(
        database,
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
    ## ------------------------------------------------------------------------------------ ##
## EOF Main runner
