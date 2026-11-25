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
import package_state
import classes.release_per_vendor as gh_uploader

from pathlib import Path

parent_dir = str(Path(__file__).resolve().parent.parent)

def fetch_all_releases(repo, token, api_headers):
    api_headers = get_headers(True, token)
    url = f"https://api.github.com/repos/{repo}/releases"

    releases = []
    params = {
        "per_page": 100,
        "page": 1,
    }

    while True:
        response = requests.get(url, headers=api_headers, params=params)
        response.raise_for_status()

        page_releases = response.json()
        if not page_releases:
            break

        releases.extend(page_releases)

        if len(page_releases) < params["per_page"]:
            break

        params["page"] += 1

    return releases

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
                full_path = os.path.join(root, file)
                # Skip excluded files and core-only files (they are copied into packages whose cores match)
                if file not in excluded_files and not is_core_only_cmake(full_path):
                    cmake_files.append(full_path)
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
                    if 'doc_ds' in systemPath or ('sam' in systemPath and re.search('^(at)?sam.+$', file_name)) or 'renesas' in systemPath or 'nuvoton' in systemPath or 'pic32' in systemPath or ('infineon' in systemPath and 'xmc' not in file_name) or ('ti' in systemPath and 'msp' in file_name) or ('gigadevice' in systemPath and 'gd32vw' in file_name)  or 'adi' in systemPath:
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

def extract_mcu_names(file_name, source_dir, regex):
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
                        if 'gcc' in source_dir or 'XC32' in source_dir or 'LLVM' in source_dir:
                            isPresent, readData = read_data_from_db('necto_db_dev.db', f'SELECT sdk_config, core_info FROM Devices WHERE name IS "{mcu_name}"')
                            # If MCU entry is found in the database
                            if isPresent:
                                if readData[0][1] == None:
                                    configJson = json.loads(readData[0][0])
                                    mcus[file_name]['cores'].add(configJson['CORE_NAME'])
                                else:
                                    configJson = json.loads(readData[0][0])
                                    core_info = json.loads(readData[0][1])
                                    for core in core_info:
                                        mcus[file_name]['cores'].add(core['core_name_define'])
                            # If this is the new MCU to be released - read data from json queries
                            elif os.path.exists(os.path.join('resources/queries/mcus', mcu_name, 'Devices.json')):
                                with open(os.path.join('resources/queries/mcus', mcu_name, 'Devices.json'), 'r') as source_json:
                                    readData = json.load(source_json)
                                if 'CORE_NAME' in readData['sdk_config']:
                                    mcus[file_name]['cores'].add(json.loads(readData['sdk_config'])['CORE_NAME'])
                                else:
                                    for core in json.loads(readData['core_info']):
                                        mcus[file_name]['cores'].add(core['core_name_define'])


    return mcus

MCU_NAME_CONDITION = re.compile(r'\$\{MCU_NAME\}\s+MATCHES\s+"([^"]*)"')
CORE_NAME_CONDITION = re.compile(r'\$\{CORE_NAME\}\s+(MATCHES|STREQUAL)\s+"([^"]*)"')

def extract_conditions_from_cmake(cmake_file):
    """
    Return (mcu_regexes, core_regexes) used in the conditions of a .cmake file.
    STREQUAL comparisons on CORE_NAME are converted to exact-match regexes.
    """
    with open(cmake_file, 'r') as f:
        content = f.read()
    mcu_regexes = MCU_NAME_CONDITION.findall(content)
    core_regexes = [
        value if operator == 'MATCHES' else f'^{re.escape(value)}$'
        for operator, value in CORE_NAME_CONDITION.findall(content)
    ]
    return mcu_regexes, core_regexes

def is_core_only_cmake(cmake_file):
    """ True for .cmake files filtered only by CORE_NAME (no MCU_NAME condition), e.g. stm/delays/m7.cmake """
    mcu_regexes, core_regexes = extract_conditions_from_cmake(cmake_file)
    return not mcu_regexes and bool(core_regexes)

def cmake_file_applies(cmake_file, mcu_names, cores):
    """
    Check whether a .cmake file is needed for a package, mirroring CMake which includes every file from the folder:
    - files with MCU_NAME conditions apply if any packaged MCU matches one of them
    - files with only CORE_NAME conditions apply if any packaged core matches one of them
    """
    mcu_regexes, core_regexes = extract_conditions_from_cmake(cmake_file)
    if mcu_regexes:
        return any(re.search(regex, mcu) for regex in mcu_regexes for mcu in mcu_names)
    return any(re.search(regex, core) for regex in core_regexes for core in cores)

def copy_applicable_cmake_files(cmake_file, source_dir, output_dir, mcu_names, cores):
    """
    Copy additional .cmake files from the vendor folder of cmake_file that the package needs:
    - every file from the delays folder(s) whose MCU_NAME / CORE_NAME condition matches the package
    - core-only files from the vendor folder itself (MCU based ones are packages of their own)
    """
    vendor_dir = os.path.dirname(cmake_file)
    for root, dirs, files in os.walk(vendor_dir):
        is_delays_dir = 'delays' in os.path.relpath(root, start=vendor_dir).split(os.sep)
        for file in files:
            full_path = os.path.join(root, file)
            if not file.endswith('.cmake') or os.path.samefile(full_path, cmake_file):
                continue
            if not is_delays_dir and not is_core_only_cmake(full_path):
                continue
            if cmake_file_applies(full_path, mcu_names, cores):
                dest_file_path = os.path.join(output_dir, os.path.relpath(full_path, start=source_dir))
                os.makedirs(os.path.dirname(dest_file_path), exist_ok=True)
                shutil.copy(full_path, dest_file_path)

def copy_cmake_files(cmake_file, source_dir, output_dir, mcu_names, cores):
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
    # Copy delays and core-only .cmake files needed by the packaged MCUs/cores
    copy_applicable_cmake_files(cmake_file, source_dir, output_dir, mcu_names, cores)

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

def copy_schemas(mcus, source_dir, base_path):

    for mcu in mcus:
        schemas_dir = os.path.join(source_dir, 'schemas', mcu)
        dest_path = os.path.join(base_path, 'schemas', mcu)
        if os.path.exists(schemas_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(schemas_dir, dest_path, dirs_exist_ok=True)

def copy_interrupts(mcus, source_dir, base_path):

    for mcu in mcus:
        interrupts_dir = os.path.join(source_dir, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        dest_path = os.path.join(base_path, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        if os.path.exists(interrupts_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(interrupts_dir, dest_path, dirs_exist_ok=True)

    copy_interrupt_files(source_dir, base_path)

def copy_local_includes(source_file, source_subdir, output_subdir):
    """
    Copy files referenced via #include "..." from the same directory as source_file.
    Used for mikroC def files which include shared MCU family definitions
    (e.g. MK64FN1M0VLL12.c -> #include "MK64FN1M0XXX12.c").
    """
    pending = [source_file]
    seen = set()
    while pending:
        current = pending.pop()
        if current in seen:
            continue
        seen.add(current)
        try:
            with open(current, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except OSError:
            continue
        for include in re.findall(r'^\s*#include\s*"([^"]+)"', content, re.MULTILINE):
            include_path = os.path.normpath(os.path.join(os.path.dirname(current), include))
            if not os.path.isfile(include_path) or include_path in seen:
                continue
            dest_path = os.path.join(output_subdir, os.path.relpath(include_path, start=source_subdir))
            os.makedirs(os.path.dirname(dest_path), exist_ok=True)
            shutil.copy(include_path, dest_path)
            pending.append(include_path)

def copy_files_from_dir(mcus, source_dir, base_path, subdirectory):

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
                    if 'gcc_clang' not in source_subdir:
                        # mikroC def files may include shared XXX definition files
                        copy_local_includes(full_source_path, source_subdir, output_subdir)

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
        subprocess.run(command, check=True, capture_output=True)
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

async def package_asset(source_dir, output_dir, arch, entry_name, packages, current_metadata, latest_release, published_metadata):
    """ Package and upload an asset as a release to GitHub """
    cmake_files = find_cmake_files(os.path.join(source_dir, "cmake"))
    file_paths = parse_files_for_paths(cmake_files, source_dir, True)
    package_to_mcu_json = []
    package_to_mcu_xlsx = []
    package_to_mcu_json_full = []
    package_to_mcu_xlsx_full = []

    for cmake_file, data in file_paths.items():
        base_output_dir = os.path.join(output_dir, f"{arch.lower()}_{entry_name.lower()}_{cmake_file}") # Subdirectory for this .cmake file
        name_without_extension = os.path.basename(base_output_dir)
        vendor = gh_uploader.resolve_mcu_vendor(data['cmake_file_path'])
        mcuNames = extract_mcu_names(cmake_file, source_dir, data['regex'])

        def assemble():
            # Copy the .cmake file into the package directory
            copy_cmake_files(data['cmake_file_path'], source_dir, base_output_dir, mcuNames[cmake_file]['mcu_names'], mcuNames[cmake_file]['cores'])
            # Copy individual files
            copy_files(data['files'], base_output_dir, source_dir)
            # Copy schema directories
            copy_schemas(mcuNames[cmake_file]['mcu_names'], source_dir, base_output_dir)
            copy_interrupts(mcuNames[cmake_file]['mcu_names'], source_dir, base_output_dir)
            # Copy defs
            for folder in ['def', 'startup', 'linker_scripts']:
                copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, base_output_dir, folder)
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

        published = package_state.find_published(published_metadata, name_without_extension)
        # Hashed from the sources first: an unchanged package is not copied together or packed
        if package_state.is_unchanged(published, package_state.virtual_package_hash(assemble, base_output_dir)):
            print(f"\033[92mUnchanged, not packed: {name_without_extension}\033[0m")
            # Keeps its release, version and download link; "unchanged" keeps it out of the upload
            packages.append({**published, "unchanged": True})
        else:
            assemble()
            archiveHash = hash_directory_contents(base_output_dir)
            print(f"\033[93mChanged, packing: {name_without_extension}\033[0m")
            # Create archive
            archive_path = compress_directory_7z(base_output_dir, entry_name, arch)
            compiler = "mikroC"
            compilers = ['mikroC AI']
            if entry_name == "gcc_clang":
                compilers = ['GCC', 'Clang']
                compiler = "GCC & Clang"
            elif "XC" in entry_name or "LLVM" in entry_name:
                compilers = [entry_name]
                compiler = entry_name
            elif "gcc" == entry_name:
                compilers = [entry_name]
                compiler = "Renesas RX GCC"

            displayName = f"{cmake_file.upper()} MCU Support package for {compiler}"
            archiveName = os.path.basename(archive_path)

            shutil.rmtree(base_output_dir)

            # Determine the version based on the hash
            version = get_version_based_on_hash(name_without_extension, (latest_release['tag_name']).replace("v", ""), archiveHash, current_metadata)
            # Add to packages list
            install_location = os.path.join("%APPLICATION_DATA_DIR%/packages", "core", arch, entry_name, name_without_extension)

            packages.append({"name" : name_without_extension, "display_name": displayName, 'compilers': compilers, "version" : version, "hash" :archiveHash, "vendor" : "MIKROE", "type" : "mcu", "category": "MCU Package", "hidden" : False, 'install_location': install_location, 'vendor': vendor})

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
    # Get all releases with pagination
    all_releases = fetch_all_releases(repo, token, headers)
    latest_release = support.get_latest_release(repo, headers)
    if len(all_releases) > 1:
        previous_release = support.get_previous_release(latest_release, all_releases)
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


def update_metadata(current_metadata, new_files, version):
    """ Update the metadata with the new files """
    updated_metadata = []
    current_files_dict = {item['name']: item for item in current_metadata}

    print(f"Updating metadata objects version to {version}.")
    for new_file in new_files:
        # Unchanged packages keep their published version
        if not new_file.pop('unchanged', False):
            new_file['version'] = version

        updated_metadata.append(new_file)

    return updated_metadata

def append_package(packages, package, display_name, version, install=None, category='utility', hash=None):
    ''' Append any additional, non MCU packages '''
    if install or install == '':
        install_location = install
    else:
        install_location = f'packages/{os.path.basename(package.lower())[:-3]}'
    package_type = f"{os.path.basename(package.lower())[:-3]}"
    if hash:
        hash_value = hash
    else:
        hash_value = hash_directory_contents(package[:-3])
    packages.append({
        "name": f"{os.path.basename(package.lower())[:-3]}",
        "display_name": display_name,
        "version": version,
        "hash": hash_value,
        "vendor": "MIKROE",
        "category": category,
        "type": package_type,
        "hidden": True,
        "install_location": f"%APPLICATION_DATA_DIR%/{install_location}"
    })

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

def fetch_latest_release_version(repo, token):
    api_headers = get_headers(True, token)
    return support.get_latest_release(repo, api_headers)

async def main(token, repo, tag_name, live=False):
    """ Main function to orchestrate packaging and uploading assets """
    architectures = ["ARM", "RISCV", "PIC32", "PIC", "dsPIC", "AVR", "RL78", "RX"]

    current_metadata = fetch_current_metadata(repo, token)
    # Published state: unchanged packages are neither packed nor uploaded
    published_metadata = package_state.fetch_published_metadata(repo, token)

    latest_release = fetch_latest_release_version(repo, token)
    if 'latest' == tag_name:
        tag_name = latest_release['tag_name']

    # Elasticsearch instance used for fetching indexed items details
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

    uploader = gh_uploader.GitHubReleaseUploader(
        repo=repo,
        token=token,
        tag_name=tag_name,
        dry_run=False
    )

    if not os.path.exists('mcu_packages.json'):
        packages = []
        for arch in architectures:
            root_source_directory = f"./{arch}"
            root_output_directory = f"./output/{arch}"
            # List directories directly under the root source directory
            with os.scandir(root_source_directory) as entries:
                print(entries)
                for entry in entries:
                    print(root_source_directory)
                    print(entry)
                    if entry.is_dir():
                        source_directory = os.path.join(root_source_directory, entry.name)
                        output_directory = os.path.join(root_output_directory, entry.name)

                        print(f"\033[34mProcessing {source_directory} to {output_directory}\033[0m")
                        await package_asset(
                            source_directory, output_directory, arch, entry.name,
                            packages, current_metadata, latest_release, published_metadata
                        )
        with open('mcu_packages.json', 'w') as file:
            json.dump(packages, file)
    else:
        with open('mcu_packages.json', 'r') as file:
            packages = json.load(file)

    # Only the packed (changed) packages are uploaded
    changed_packages = [package for package in packages if not package.get('unchanged')]
    print(f"\033[94m{len(changed_packages)} of {len(packages)} MCU packages changed and were packed.\033[0m")
    payload = uploader.build_release_payload_from_packages(changed_packages, 'output')

    # Generate clocks.json
    if not live:
        input_directory = "./"
        output_file = "./output/docs/clocks.json"
        clocksGenerator = GenerateClocks(input_directory, output_file)
        clocksGenerator.generate()
        gh_uploader.append_to_payload(payload, 'clocks.json', Path(output_file).resolve())

    # Generate schemas.json
    if not live:
        input_directory = "./"
        output_file = "./output/docs/schemas.json"
        schemaGenerator = GenerateSchemas(input_directory, output_file, ['board_regex'])
        schemaGenerator.generate()
        gh_uploader.append_to_payload(payload, 'schemas.json', Path(output_file).resolve())

    # Generate document files asset
    if not live:
        archive_path = compress_directory_7z(os.path.join('./output', 'docs'), 'docs.7z')
        gh_uploader.append_to_payload(payload, 'docs.7z', Path(str(archive_path)).resolve())

    if not live:
        new_metadata = update_metadata(current_metadata, packages, (latest_release['tag_name']).replace("v", ""))
        with open('metadata.json', 'w') as f:
            json.dump(new_metadata, f, indent=4)
        gh_uploader.append_to_payload(payload, 'metadata.json', os.path.join(parent_dir, 'metadata.json'))

    ## Final step. Asset upload from created payload.
    uploader.upload_from_json(payload, new_metadata, "")

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("tag_name", help="Tag name from the release")
    parser.add_argument("--live", help="Upload MCU packages only", type=bool, default=False)
    args = parser.parse_args()
    print("Starting the upload process...")
    asyncio.run(main(args.token, args.repo, args.tag_name, args.live))
    print("Upload process completed.")
