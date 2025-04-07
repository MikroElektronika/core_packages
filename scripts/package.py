import os, re, subprocess
import shutil, requests, json
import argparse, aiohttp, asyncio
import aiofiles, hashlib
import sqlite3, inspect
import time
from clocks import GenerateClocks
from schemas import GenerateSchemas
import pandas as pd
from elasticsearch import Elasticsearch

import support as support

from pathlib import Path

def create_table(data, table_out):
    ''' Creates a table with data and saves it to table_out '''
    # Define column names
    columns = ['Package name', 'MCU from package', 'Toolchain']
    # Convert the data to a DataFrame
    df = pd.DataFrame(data, columns=columns)
    # Specify the file path for the new Excel file
    file_path = table_out
    # Write the DataFrame to a new Excel file
    df.to_excel(file_path, index=False)

def print_line_number(msg, line):
    ''' Prints current line number with provided message '''
    print(f"{msg} ::: Line number {line}")

def find_cmake_files(directory):
    """ Return a list of .cmake files in the directory, excluding specific files """
    cmake_files = []
    excluded_files = {
        'coreUtils.cmake',
        'ExportConfig.cmake.in',
        'InstallHeaders.cmake.in',
        'mikroeExportConfig.cmake.in'
    }

    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith(".cmake") and not 'delays' in root:
                if file not in excluded_files:  # Check if the file is not in the excluded list
                    cmake_files.append(os.path.join(root, file))
    return cmake_files

def parse_files_for_paths(cmake_files, source_dir, isGCC=None):
    """ Parse cmake files to extract paths, directory contents, and regex for folder names inside if blocks relative to the source_directory """
    path_pattern = re.compile(r'set\((\w+)\s+"([^"]+)"\)')
    regex_pattern = re.compile(r'if.*MATCHES\s+"([^"]+)"')  # Regex to capture MATCHES condition
    regex_pattern_or = re.compile(r'.*MATCHES\s+"([^"]+)"')  # Regex to capture MATCHES condition
    paths = {}
    for file in cmake_files:
        file_name = os.path.splitext(os.path.basename(file))[0]  # Use filename without extension
        paths[file_name] = {'files': set(), 'regex': None, 'cmake_file_path': file}  # Initialize a set for paths and a regex entry per cmake file
        inside_if = False
        vendor = os.path.basename(os.path.dirname(file))
        with open(file, 'r') as f:
            regex_array = []
            current_regex = None
            for line in f:
                if isGCC and 'list(APPEND local_list_include' in line:

                    systemPath = line.split()[-1][:-1].replace("${vendor}", vendor)
                    if 'doc_ds' in systemPath or ('sam' in systemPath and re.search('^(at)?sam.+$', file_name)):
                        systemPath = os.path.dirname(systemPath)
                    systemPath = os.path.join(source_dir, systemPath)
                    paths[file_name]['files'].add(systemPath)
                else:
                    if 'if(' in line and '${MCU_NAME} MATCHES' in line:
                        regex_match = regex_pattern.search(line)
                        if 'OR ${MCU_NAME} MATCHES' in regex_match.string:
                            check_split = regex_match.string.split('OR')
                            for each_split in check_split:
                                regex_array.append(regex_pattern_or.search(each_split).group(1))
                            current_regex = '|'.join(regex_array)
                        else:
                            if regex_match:
                                current_regex = regex_match.group(1)  # Capture the regex when it appears
                                regex_array.append(current_regex)
                        inside_if = True
                    elif inside_if and line.strip() == 'endif()':
                        inside_if = False
                        if current_regex:
                            paths[file_name]['regex'] = '|'.join(regex_array)  # Save the regex before resetting
                            current_regex = None
                    elif inside_if:
                        matches = path_pattern.search(line)
                        if matches:
                            key, value = matches.groups()
                            full_path = os.path.join(source_dir, value)
                            if key == "SYSTEM_LIB_INCLUDE_DIR" and value:
                                if os.path.isdir(full_path):
                                    for root, dirs, files in os.walk(full_path):
                                        for file in files:
                                            paths[file_name]['files'].add(os.path.join(root, file))
                                continue
                            paths[file_name]['files'].add(full_path)
    return paths

def copy_files(files, output_dir, source_dir):
    """ Copy individual files from source_paths to output_dir keeping the folder structure """
    for full_source_path in files:
        if os.path.exists(full_source_path):
            relative_path = os.path.relpath(full_source_path, start=source_dir)
            full_dest_path = os.path.join(output_dir, relative_path)
            os.makedirs(os.path.dirname(full_dest_path), exist_ok=True)
            if os.path.isdir(full_source_path):
                shutil.copytree(full_source_path, full_dest_path, dirs_exist_ok=True)
            else:
                shutil.copy(full_source_path, full_dest_path)
        else:
            print(f"File not found: {full_source_path}")

def copy_interrupt_files(source_dir, output_dir):
    """ Copy specific interrupt files that should be included in every package """
    # Copy interrupts.h to interrupts/include
    source_file_h = os.path.join(source_dir, 'interrupts/include/interrupts.h')
    dest_dir_h = os.path.join(output_dir, 'interrupts/include')
    os.makedirs(dest_dir_h, exist_ok=True)
    shutil.copy(source_file_h, dest_dir_h)

    # Copy interrupts.c to interrupts
    source_file_c = os.path.join(source_dir, 'interrupts/interrupts.c')
    dest_dir_c = os.path.join(output_dir, 'interrupts')
    os.makedirs(dest_dir_c, exist_ok=True)
    shutil.copy(source_file_c, dest_dir_c)

def extract_mcu_names(file_name, source_dir, output_dir, regex):
    """
    Copy files from a specific subdirectory in source_dir that match a regex to a corresponding subdirectory in output_dir,
    maintaining the folder structure.
    """
    mcus = {}
    mcus[file_name] = {'mcu_names': set(), 'cores': set()}
    source_subdir = os.path.join(source_dir, 'def')

    if regex:
        regex_pattern = re.compile(regex, re.IGNORECASE)

        for root, dirs, files in os.walk(source_subdir):
            for file in files:
                if file.endswith('.json'):
                    mcu_name = os.path.splitext(file)[0]
                    if regex_pattern.match(mcu_name):
                        mcus[file_name]['mcu_names'].add(mcu_name)
                        if 'gcc_clang' in source_dir or 'XC32' in source_dir:
                            isPresent, readData = read_data_from_db('necto_db.db', f'SELECT sdk_config FROM Devices WHERE name IS "{mcu_name}"')
                            if isPresent:
                                configJson = json.loads(readData[0][0])
                                mcus[file_name]['cores'].add(configJson['CORE_NAME'])

    return mcus

def find_first_matching_mcu_name(source_dir, regex):
    """
    Find and return the filename of the first file that matches a given regex in the specified 'def' directory.
    """
    if not regex:
        return None

    def_dir = os.path.join(source_dir, 'def')  # Define the path to the 'def' directory
    regex_pattern = re.compile(regex)  # Compile the regex pattern for efficiency

    # Walk through the directory
    for root, dirs, files in os.walk(def_dir):
        for file in files:
            if file.endswith('.json'):
                if regex_pattern.search(os.path.splitext(file)[0]):  # Check if the file matches the regex
                    filename_without_extension = os.path.splitext(file)[0]  # Remove the extension from the filename
                    return filename_without_extension  # Return just the filename without its path or extension

    return None  # Return None if no matching file is found

def extract_regex_from_cmake(cmake_file):
    """ Extract regex patterns from a given .cmake file, supporting complex logical conditions. """
    # Extended regex pattern to capture multiple regex conditions separated by 'OR'
    regex_pattern = re.compile(r'\$\{MCU_NAME\}\s*MATCHES\s*"(.*?)"')
    regexes = set()  # Use a set to avoid duplicates if the same regex appears more than once

    with open(cmake_file, 'r') as file:
        content = file.read()

    # Finding all occurrences of MCU_NAME MATCHES conditions
    if_conditions = re.findall(r'if\s*\((.*?)\)\s*endif', content, re.DOTALL)
    for condition in if_conditions:
        # Extract all regex patterns within the condition
        matches = regex_pattern.findall(condition)
        regexes.update(matches)

    return list(regexes)

def copy_files_based_on_regex(source_dir, dest_dir, check_string):
    """
    Go through all .cmake files in source_dir, extract regex patterns, and copy files where check_string matches any regex.
    """
    if not check_string:
        return

    fileCopied = False
    for root, dirs, files in os.walk(source_dir):
        for file in files:
            if file.endswith(".cmake"):
                full_path = os.path.join(root, file)
                regexes = extract_regex_from_cmake(full_path)
                for regex in regexes:
                    if re.match(regex, check_string) and not fileCopied:
                        # If check_string matches the regex, copy the file
                        fileCopied = True
                        dest_file_path = os.path.join(dest_dir, file)
                        os.makedirs(os.path.dirname(dest_file_path), exist_ok=True)
                        shutil.copy(full_path, dest_file_path)
        if not fileCopied and 'STM32' in check_string and 'gcc_clang' in source_dir:
            if check_string[6] == '7': ## in special grouped case for M7 not covered by single files
                os.makedirs(dest_dir, exist_ok=True)
                shutil.copy(os.path.join(root, 'm7.cmake'), os.path.join(dest_dir, 'm7.cmake'))
            elif check_string[6] == '0': ## in special grouped case for M0 not covered by single files
                os.makedirs(dest_dir, exist_ok=True)
                shutil.copy(os.path.join(root, 'm0.cmake'), os.path.join(dest_dir, 'm0.cmake'))


def copy_cmake_files(cmake_file, source_dir, output_dir, regex):
    """ Copy the .cmake file to the output directory maintaining the same folder structure """
    relative_path = os.path.relpath(cmake_file, start=source_dir)
    destination_path = os.path.join(output_dir, relative_path)
    os.makedirs(os.path.dirname(destination_path), exist_ok=True)
    shutil.copy(cmake_file, destination_path)

    # Copy coreUtils.cmake
    shutil.copy(os.path.join(source_dir, "cmake/coreUtils.cmake"), os.path.join(output_dir, "cmake"))

    # Copy either mikroeExportConfig.cmake.in or ExportConfig.cmake.in depending on which exists
    export_config_path = os.path.join(source_dir, "cmake/mikroeExportConfig.cmake.in")
    fallback_config_path = os.path.join(source_dir, "cmake/ExportConfig.cmake.in")
    install_headers_path = os.path.join(source_dir, "cmake/InstallHeaders.cmake.in")
    if os.path.exists(export_config_path):
        shutil.copy(export_config_path, os.path.join(output_dir, "cmake"))
    elif os.path.exists(fallback_config_path):
        shutil.copy(fallback_config_path, os.path.join(output_dir, "cmake"))
    if os.path.exists(install_headers_path):
        shutil.copy(install_headers_path, os.path.join(output_dir, "cmake"))
    if 'gcc_clang' in source_dir:
        mcuFileName = find_first_matching_mcu_name(source_dir, regex)
        delays_cmake_dir = os.path.join(os.path.dirname(cmake_file), 'delays')
        delay_relative_path = os.path.relpath(delays_cmake_dir, start=source_dir)
        delay_destination_path = os.path.join(output_dir, delay_relative_path)
        copy_files_based_on_regex(delays_cmake_dir, delay_destination_path, mcuFileName)

# Used to check if file exists locally
def checkFileOnDisk(fileName):
    my_file = Path(fileName)
    if my_file.is_file():
        return 0
    else:
        return -1

# Used to download file from downloadLink into outputDir directory
# and save the file as outputFileName
# verifyDownload is used to retrieve error if download failed
def downloadFile(downloadLink, outputDir, outputFileName, verifyDownload):
    lastError = 0

    # Ensure the output directory exists
    if outputDir:
        os.makedirs(outputDir, exist_ok=True)

    # Full path to where the file will be saved
    fullPath = os.path.join(outputDir, outputFileName)

    try:
        # Make the request
        response = requests.get(downloadLink, stream=True)
        response.raise_for_status()  # Raises a HTTPError for bad responses

        # Write the response content to a file
        with open(fullPath, 'wb') as f:
            for chunk in response.iter_content(chunk_size=8192):
                f.write(chunk)

        if verifyDownload:
            lastError = checkFileOnDisk(fullPath)

    except requests.RequestException as e:
        print(f"Error downloading file: {e}")
        lastError = -1

    return lastError, fullPath

def fetch_json_data(download_link, token):
    """
    Fetches JSON data from the specified URL using an authorization token and returns it as a dictionary.

    Args:
        download_link (str): URL from which to fetch the JSON data.
        token (str): Authorization token for the request.

    Returns:
        tuple: The first element is a dictionary containing the JSON data (or None in case of failure),
               the second element is an error message or None if no errors occurred.
    """
    headers = {
        'Authorization': f'Bearer {token}',
        'Accept': 'application/octet-stream'  # Explicitly request JSON data
    }

    try:
        # Make the request
        response = requests.get(download_link, headers=headers)
        response.raise_for_status()  # Raises a HTTPError for bad responses

        # Parse JSON content and return
        json_data = response.json()
        return json_data  # Return data and no error message

    except requests.RequestException as e:
        print(f"Error fetching JSON data: {e}")
        return None, str(e)  # Return None for data and error message

def functionRegex(value, pattern):
    c_pattern = re.compile(r"\b" + pattern.lower() + r"\b")
    return c_pattern.search(value) is not None

def copy_schemas(mcus, source_dir, output_dir, base_path):

    for mcu in mcus:
        schemas_dir = os.path.join(source_dir, 'schemas', mcu)
        dest_path = os.path.join(base_path, 'schemas', mcu)
        if os.path.exists(schemas_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(schemas_dir, dest_path, dirs_exist_ok=True)

def copy_interrupts(mcus, source_dir, output_dir, base_path):

    for mcu in mcus:
        interrupts_dir = os.path.join(source_dir, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        dest_path = os.path.join(base_path, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        if os.path.exists(interrupts_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(interrupts_dir, dest_path, dirs_exist_ok=True)

    copy_interrupt_files(source_dir, base_path)

def copy_files_from_dir(mcus, source_dir, output_dir, base_path, subdirectory):

    source_subdir = os.path.join(source_dir, subdirectory)
    output_subdir = os.path.join(base_path, subdirectory)

    for root, dirs, files in os.walk(source_subdir):
        for file in files:
            if os.path.basename(file) == 'mcu.h':
                # Special rule for 'mcu.h' files, ensure the directory matches the regex
                if 'XC16' in root:
                    mcuCheck = os.path.basename(root)
                else:
                    mcuCheck = os.path.basename(root).upper()
                if mcuCheck in mcus:
                    relative_path = os.path.relpath(root, start=source_subdir)
                    full_dest_path = os.path.join(output_subdir, relative_path)
                    shutil.copytree(root, full_dest_path, dirs_exist_ok=True)
            if os.path.splitext(os.path.basename(file))[0].upper().replace('DSPIC', 'dsPIC') in mcus:
                if 'gcc_clang' in source_subdir and re.match('^MKV?.+XXX.+$', file):
                    continue
                else:
                    full_source_path = os.path.join(root, file)
                    relative_path = os.path.relpath(full_source_path, start=source_subdir)
                    full_dest_path = os.path.join(output_subdir, relative_path)
                    os.makedirs(os.path.dirname(full_dest_path), exist_ok=True)
                    shutil.copy(full_source_path, full_dest_path)

def copy_delays(cores, source_dir, output_dir, base_path):

    for core in cores:
        delays_dir = os.path.join(source_dir, 'delays', core.lower())
        dest_path = os.path.join(base_path, 'delays', core.lower())
        if os.path.exists(delays_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(delays_dir, dest_path, dirs_exist_ok=True)

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

def insertIntoTable(db, tableName, values, columns):
    conn = sqlite3.connect(db)
    cur = conn.cursor()
    numOfItems = ''
    for itemCount in range(1, len(values) + 1):
        numOfItems += '?,'
    cur.execute(f'INSERT OR IGNORE INTO {tableName} ({columns}) VALUES ({numOfItems[:-1]})', values)
    conn.commit()
    conn.close()

def updateTable(db, query, newFieldValue):
    try:
        # Connect to existing SQLite database
        conn = sqlite3.connect(db)
        cur = conn.cursor()
        # Update fields in the table with data
        cur.execute(query, (newFieldValue,))
        # Commit changes
        conn.commit()
    except sqlite3.Error as e:
        print("SQLite error:", e)
    finally:
        # Close connection
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

def update_database(package_name, mcus, db_path):
    for each_pack in mcus:
        for each_mcu in mcus[each_pack]['mcu_names']:
            ## Replace for MCUs which have different json file names and UID in database
            each_mcu = re.sub('_', '-', each_mcu)
            is_present, read_data_compiler = read_data_from_db(db_path, f'SELECT compiler_uid FROM CompilerToDevice WHERE device_uid IS "{each_mcu.replace('dsPIC', 'DSPIC')}"')
            is_present, read_data = read_data_from_db(db_path, f'SELECT * FROM Devices WHERE uid IS "{each_mcu.upper()}"')
            counter = 0
            data_as_list_joined = []
            while counter != len(read_data):
                existing_packages = {}
                if read_data[counter][len(read_data[counter])-1]:
                    existing_packages = json.loads(read_data[counter][len(read_data[counter])-1])
                data_as_list = list(read_data[counter])
                for each_compiler in list(read_data_compiler):
                    if 'mchp_xc' in each_compiler[0] and '_xc' in package_name:
                        existing_packages[each_compiler[0]] = package_name
                    else:
                        if not re.search('xc(8|16|32)', package_name):
                            for each_split_check in package_name.split('_')[1:]:
                                if re.search(each_split_check, each_compiler[0]):
                                    existing_packages[each_compiler[0]] = package_name
                data_as_list[len(data_as_list)-1] = existing_packages
                data_as_list_joined.append(data_as_list)
                counter += 1
            for each_list in data_as_list_joined:
                if is_present:
                    updateTable(
                        db_path,
                        f'''UPDATE Devices SET installer_package = ? WHERE uid = "{each_mcu.upper()}"''',
                        json.dumps(each_list[len(each_list)-1])
                    )
                else:
                    raise ValueError("%s does not exist in database!" % each_mcu)

    return

async def upload_release_asset(session, token, repo, release_id, asset_path, assets, delete_existing=True):
    """Upload an asset to a specific GitHub release. If the asset exists, delete it first."""
    asset_name = os.path.basename(asset_path)
    url = f'https://api.github.com/repos/{repo}/releases/{release_id}/assets'
    headers = {
        'Authorization': f'token {token}',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/50.0.2661.102 Safari/537.36'
    }

    # Check if the asset already exists
    for asset in assets:
        if asset['name'] == asset_name:
            # If the asset exists, delete it
            delete_url = asset['url']
            if delete_existing:
                print(f'Deleting existing asset: {asset_name}')
                delete_response = requests.delete(delete_url, headers=headers)
                delete_response.raise_for_status()
                assets.remove(asset)
                print(f'\033[91mAsset deleted: {asset_name}\033[0m')
            break

    # Upload the new asset
    url = f'https://uploads.github.com/repos/{repo}/releases/{release_id}/assets?name={os.path.basename(asset_path)}'
    headers = {
        'Authorization': f'token {token}',
        'Content-Type': 'application/x-7z-compressed',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/50.0.2661.102 Safari/537.36'
    }
    if delete_existing:
        with open(asset_path, 'rb') as file:
            print(f'Uploading new asset: {asset_name}')
            response = requests.post(url, headers=headers, data=file)
            response.raise_for_status()
            print(f'\033[92mUploaded asset: {os.path.basename(asset_path)} to release ID: {release_id}\033[0m')
            return response.json()
    else:
        asset_exists = False
        for asset in assets:
            if asset['name'] == asset_name:
                asset_exists = True
                break
        if not asset_exists:
            with open(asset_path, 'rb') as file:
                print(f'Uploading new asset: {asset_name}')
                response = requests.post(url, headers=headers, data=file)
                response.raise_for_status()
                print(f'\033[92mUploaded asset: {os.path.basename(asset_path)} to release ID: {release_id}\033[0m')
                return response.json()

async def package_asset(source_dir, output_dir, arch, entry_name, token, repo, tag_name, packages, current_metadata, db_paths, assets):
    """ Package and upload an asset as a release to GitHub """
    release_id = get_release_id(repo, tag_name, token)
    cmake_files = find_cmake_files(os.path.join(source_dir, "cmake"))
    file_paths = parse_files_for_paths(cmake_files, source_dir, True)
    package_to_mcu_json = []
    package_to_mcu_xlsx = []
    package_to_mcu_json_full = []
    package_to_mcu_xlsx_full = []
    for cmake_file, data in file_paths.items():
        base_output_dir = os.path.join(output_dir, f"{arch.lower()}_{entry_name.lower()}_{cmake_file}") # Subdirectory for this .cmake file
        # Copy the .cmake file into the package directory
        copy_cmake_files(data['cmake_file_path'], source_dir, base_output_dir, data['regex'])

        mcuNames = extract_mcu_names(cmake_file, source_dir, output_dir, data['regex'])
        # Copy individual files
        copy_files(data['files'], base_output_dir, source_dir)
        # Copy schema directories
        copy_schemas(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir)
        copy_interrupts(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir)
        # Copy defs
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'def')
        # Copy startups
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'startup')
        # Copy linker scirpts
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'linker_scripts')
        # Copy delay files
        copy_delays(mcuNames[cmake_file]['cores'], source_dir, output_dir, base_output_dir)
        # Copy std_library to every package
        std_library_path = os.path.join(source_dir, 'std_library')
        if os.path.exists(std_library_path):
            shutil.copytree(std_library_path, os.path.join(base_output_dir, "std_library"), dirs_exist_ok=True)
        # Copy include to every package
        include_path = os.path.join(source_dir, 'include')
        if os.path.exists(include_path):
            shutil.copytree(include_path, os.path.join(base_output_dir, "include"), dirs_exist_ok=True)
        # Copy cstdio to every package
        cstdio_path = os.path.join(source_dir, 'cstdio')
        if os.path.exists(cstdio_path):
            shutil.copytree(cstdio_path, os.path.join(base_output_dir, "cstdio"), dirs_exist_ok=True)

        # Copy common to every package
        shutil.copytree(os.path.join(source_dir, 'common'), os.path.join(base_output_dir, "common"), dirs_exist_ok=True)
        # Copy base CMakeLists.txt to every package
        shutil.copy(os.path.join(source_dir, "CMakeLists.txt"), base_output_dir)

        # Create archive
        archive_path = compress_directory_7z(base_output_dir, entry_name, arch)

        displayName = f"{cmake_file.upper()} Bare Metal Package"
        archiveHash = hash_directory_contents(base_output_dir)
        archiveName = os.path.basename(archive_path)

        shutil.rmtree(base_output_dir)
        # Upload archive
        upload_result= ""
        async with aiohttp.ClientSession() as session:
            upload_tasks = [upload_release_asset(session, token, repo, release_id, archive_path, assets)]
            results = await asyncio.gather(*upload_tasks, return_exceptions=True)
            for result in results:
                upload_result = result
            print("All uploads completed.")

        # Determine the version based on the hash
        version = get_version_based_on_hash(archiveName, tag_name.replace("v", ""), archiveHash, current_metadata)
        # Add to packages list
        name_without_extension = os.path.splitext(os.path.basename(archiveName))[0]
        install_location = os.path.join("%APPLICATION_DATA_DIR%/packages", "core", arch, entry_name, name_without_extension)

        packages.append({"name" : name_without_extension, "display_name": displayName, "version" : version, "hash" :archiveHash, "vendor" : "MIKROE", "type" : "mcu", "category": "MCU Package", "hidden" : False, 'install_location': install_location})
        package_changed = (version == tag_name.replace("v", ""))

        # Mark package for appropriate device and toolchain
        for each_db in db_paths:
            update_database(name_without_extension, mcuNames, each_db)

        # Then create a specific database used as asset later
        os.makedirs('./output/databases/', exist_ok=True)
        shutil.copy('build_test.db', f'./output/databases/{name_without_extension}.db')
        for eachMcu in mcuNames[cmake_file]['mcu_names']:
            updateTable(
                f'./output/databases/{name_without_extension}.db',
                f'''UPDATE Devices SET sdk_support = ? WHERE uid = "{eachMcu.upper()}"''',
                1  ## Set to 1 to use for automated build tests
            )

        mcu_check = None
        mcu_full_list = []
        for each_pack in mcuNames:
            for each_mcu in mcuNames[each_pack]['mcu_names']:
                if not mcu_check:
                    mcu_check = each_mcu
                mcu_full_list.append(each_mcu)
        package_to_mcu_xlsx.append([name_without_extension, mcu_check, entry_name])
        package_to_mcu_json.append({name_without_extension:[mcu_check, entry_name]})
        package_to_mcu_xlsx_full.append([name_without_extension, ','.join(mcu_full_list), entry_name])
        package_to_mcu_json_full.append({name_without_extension: {'mcus': mcu_full_list, 'toolchain': entry_name}})

    # Create a table with package to mcus
    os.makedirs(f'./output/docs/{arch}', exist_ok=True)
    # Uncomment to get only one MCU for package
    # create_table(package_to_mcu_xlsx, f'./output/docs/{arch}/packageToMcu-{arch}-{entry_name}.xlsx')
    create_table(package_to_mcu_xlsx_full, f'./output/docs/{arch}/packageToMcu-{arch}-{entry_name}-full.xlsx')

    # Uncomment to get only one MCU for package
    # with open(f'./output/docs/{arch}/packageToMcu-{arch}-{entry_name}.json', 'w') as fp:
        # fp.write(json.dumps(package_to_mcu_json, sort_keys=True, indent=4))
    # fp.close()
    with open(f'./output/docs/{arch}/packageToMcu-{arch}-{entry_name}-full.json', 'w') as fp:
        fp.write(json.dumps(package_to_mcu_json_full, sort_keys=True, indent=4))
    fp.close()

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

def fetch_current_metadata(repo, token):
    """ Fetch the current metadata from the GitHub repository """
    url = f"https://api.github.com/repos/{repo}/releases"
    headers = {'Authorization': f'token {token}'}
    response = requests.get(url, headers=headers)
    releases = response.json()
    if len(releases) > 1:
        previous_release = support.get_previous_release(releases)
        if not previous_release:
            print_line_number('Error when fetching previous release version', inspect.currentframe().f_lineno)
            exit(-1)
        # Print relevant info without the full asset list
        print(f"Release info:\n{json.dumps({key: val for key, val in previous_release.items() if key != 'assets'}, indent=4)}")
        for asset in previous_release.get('assets', []):
            if asset['name'] == 'metadata.json':
                print("Found metadata.json")
                metadata_url = asset['url']
                print("Attempting to download metadata from:", metadata_url)
                metadata_response = fetch_json_data(metadata_url, token)
                return metadata_response
    return []

def get_version_based_on_hash(package_name, version, hash_value, current_metadata):
    """
    Check if the package name and hash exist in the current metadata.
    If the hash matches, return the version from the current metadata.
    Otherwise, return the provided version.

    Args:
        package_name (str): The name of the package.
        version (str): The version to return if hash doesn't match or package is not found.
        hash_value (str): The hash value to compare.
        current_metadata (list): The list of current metadata entries.

    Returns:
        str: The appropriate version based on the hash comparison.
    """
    # Create a dictionary for quick lookup
    metadata_dict = {item['name']: item for item in current_metadata}

    # Check if the package exists in the current metadata
    if package_name in metadata_dict:
        existing_package = metadata_dict[package_name]

        # Compare the hash values
        if existing_package['hash'] == hash_value:
            # If the hash matches, return the version from the current metadata
            return existing_package['version']

    # If the package is not found or the hash doesn't match, return the provided version
    return version

def get_release_id(repo, tag_name, token):
    """Get the release ID for a given tag name."""
    url = f'https://api.github.com/repos/{repo}/releases/tags/{tag_name}'
    headers = {
        'Authorization': f'token {token}',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/50.0.2661.102 Safari/537.36'
    }
    response = requests.get(url, headers=headers)
    response.raise_for_status()
    return response.json()['id']

def get_all_release_assets(repo, release_id, token):
    all_assets = []
    headers = {
        'Authorization': f'token {token}',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/50.0.2661.102 Safari/537.36'
    }
    page = 1
    while True:
        url = f'https://api.github.com/repos/{repo}/releases/{release_id}/assets?page={page}&per_page=30'
        response = requests.get(url, headers=headers)
        response.raise_for_status()
        assets = response.json()

        # If no more assets, break out of loop
        if not assets:
            break

        all_assets += (asset for asset in assets)

        page += 1

    return all_assets

def fetch_elasticsearch_data(index_name):
    # Elasticsearch instance used for indexing
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

    for eachHit in response['hits']['hits']:
        if eachHit['_id'] == 'database':
            if eachHit['_source']['name'] == 'database':
                return eachHit['_source']['version']

    return None

def update_metadata(current_metadata, new_files, version):
    """ Update the metadata with the new files """
    updated_metadata = []
    print(f"Update metadata: {current_metadata}")
    print(f"New files: {new_files}")
    current_files_dict = {item['name']: item for item in current_metadata}

    for new_file in new_files:
        name = new_file['name']
        if name in current_files_dict:
            if 'database' == name:
                print(f"Update version to: {version}")
                db_version = fetch_elasticsearch_data(os.environ['ES_INDEX_LIVE'])
                if not db_version:
                    db_version = version
                new_file['version'] = db_version
            else:
                if new_file['hash'] != current_files_dict[name]['hash']:
                    # Increment version
                    print(f"Update version to: {version}")
                    new_file['version'] = version
        else:
            # If it's a new file, set the initial version
            new_file['version'] = "1.0.0"

        updated_metadata.append(new_file)

    return updated_metadata

def append_package(packages, package, display_name, version, install=None, category='utility'):
    ''' Append any additional, non MCU packages '''
    if install or install == '':
        install_location = install
    else:
        install_location = f'packages/{os.path.basename(package.lower())[:-3]}'
    package_type = f"{os.path.basename(package.lower())[:-3]}"
    if os.path.basename(package.lower()) == 'database_dev.7z':
        package_type = 'database'
    packages.append({
        "name": f"{os.path.basename(package.lower())[:-3]}",
        "display_name": display_name,
        "version": version,
        "hash": hash_directory_contents(package[:-3]),
        "vendor": "MIKROE",
        "category": category,
        "type": package_type,
        "hidden": True,
        "install_location": f"%APPLICATION_DATA_DIR%/{install_location}"
    })

async def main(token, repo, tag_name):
    """ Main function to orchestrate packaging and uploading assets """
    architectures = ["ARM", "RISCV", "PIC32", "PIC", "dsPIC", "AVR"]
    db_paths = ['necto_db.db', 'necto_db_dev.db']

    current_metadata = fetch_current_metadata(repo, token)

    # Get the release ID used to upload assets
    release_id = get_release_id(repo, tag_name, token)
    assets = get_all_release_assets(repo, release_id, token)

    packages = []
    for arch in architectures:
        root_source_directory = f"./{arch}"
        root_output_directory = f"./output/{arch}"
        # List directories directly under the root source directory
        try:
            with os.scandir(root_source_directory) as entries:
                print(entries)
                for entry in entries:
                    print(root_source_directory)
                    print(entry)
                    if entry.is_dir():
                        source_directory = os.path.join(root_source_directory, entry.name)
                        output_directory = os.path.join(root_output_directory, entry.name)

                        print(f"Processing {source_directory} to {output_directory}")
                        await package_asset(
                            source_directory, output_directory, arch, entry.name,
                            token, repo, tag_name,
                            packages, current_metadata, db_paths, assets
                        )

        except Exception as e:
            print(f"Failed to process directories in {root_source_directory}: {e}")

    for each_db in db_paths:
        async with aiohttp.ClientSession() as session:
            await upload_release_asset(session, token, repo, release_id, each_db, assets)

    # Uncomment to get specific test database per package
    # for each_package in packages:
    #     async with aiohttp.ClientSession() as session:
    #         await upload_release_asset(session, token, repo, release_id, f"output/databases/{each_package['name']}.db", assets)

    # Generate clocks.json
    input_directory = "./"
    output_file = "./output/docs/clocks.json"
    clocksGenerator = GenerateClocks(input_directory, output_file)
    clocksGenerator.generate()
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, release_id, output_file, assets)

    # Generate schemas.json
    input_directory = "./"
    output_file = "./output/docs/schemas.json"
    # TODO - Add regex definitions to the array if needed
    # At the moment we check only for 'board_regex' fields in JSON files
    schemaGenerator = GenerateSchemas(input_directory, output_file, ['board_regex'])
    schemaGenerator.generate()
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, release_id, output_file, assets)

    # Generate images package
    archive_path = compress_directory_7z(os.path.join('./resources', 'images'), 'images.7z')
    append_package(
        packages, archive_path,
        "NECTO Resources - Images",
        get_version_based_on_hash(
            'resources_images', tag_name.replace("v", ""),
            hash_directory_contents(archive_path), current_metadata
        ),
        'resources/images',
        'resources'
    )
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, release_id, archive_path, assets)

    # Generate preinit package
    archive_path = compress_directory_7z(os.path.join('./utils', 'preinit'), 'preinit.7z')
    append_package(
        packages, archive_path,
        "Preinit library",
        get_version_based_on_hash(
            'preinit', tag_name.replace("v", ""),
            hash_directory_contents(archive_path), current_metadata
        )
    )
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, release_id, archive_path, assets)

    # Generate unit_test_lib package
    archive_path = compress_directory_7z(os.path.join('./utils', 'unit_test_lib'), 'unit_test_lib.7z')
    append_package(
        packages, archive_path,
        "Unit test library",
        get_version_based_on_hash(
            'unit_test_lib', tag_name.replace("v", ""),
            hash_directory_contents(archive_path), current_metadata
        )
    )
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, release_id, archive_path, assets)

    # Generate mikroe_utils_common package
    archive_path = compress_directory_7z(os.path.join('./utils', 'cmake'), 'mikroe_utils_common.7z')
    append_package(
        packages, archive_path,
        "MikroE common utilities",
        get_version_based_on_hash(
            'mikroe_utils_common', tag_name.replace("v", ""),
            hash_directory_contents(archive_path), current_metadata
        ),
        'cmake'
    )
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, release_id, archive_path, assets)

    # Generate database packages
    for each_db in db_paths:
        shutil.copy(f'./{each_db}', './utils/databases/necto_db.db')
        package_suffix = ''
        if 'dev' in each_db:
            package_suffix = '_dev'
        archive_path = compress_directory_7z(os.path.join('./utils', 'databases'), f'database{package_suffix}.7z')
        append_package(
            packages, archive_path,
            "NECTO Database",
            get_version_based_on_hash(
                f'databases{package_suffix}', tag_name.replace("v", ""),
                hash_directory_contents(archive_path), current_metadata
            ),
            f'databases'
        )
        async with aiohttp.ClientSession() as session:
            upload_result = await upload_release_asset(session, token, repo, release_id, archive_path, assets)
        os.remove(os.path.join('./utils', f'database{package_suffix}.7z'))

    # Generate document files asset
    archive_path = compress_directory_7z(os.path.join('./output', 'docs'), 'docs.7z')
    async with aiohttp.ClientSession() as session:
        upload_result = await upload_release_asset(session, token, repo, release_id, archive_path, assets)

    new_metadata = update_metadata(current_metadata, packages, tag_name.replace("v", ""))
    with open('metadata.json', 'w') as f:
        json.dump(new_metadata, f, indent=4)

    async with aiohttp.ClientSession() as session:
        await upload_release_asset(session, token, repo, release_id, "metadata.json", assets)

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("tag_name", help="Tag name from the release")
    args = parser.parse_args()
    print("Starting the upload process...")
    asyncio.run(main(args.token, args.repo, args.tag_name))
    print("Upload process completed.")
