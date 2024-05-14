import subprocess
import os
import shutil
import re
import requests
import json
from pathlib import Path
import py7zr
import argparse
import aiohttp
import asyncio
import aiofiles
import hashlib
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

def parse_files_for_paths(cmake_files, source_dir, isGCC = None):
    """ Parse cmake files to extract paths, directory contents, and regex for folder names inside if blocks relative to the source_directory """
    path_pattern = re.compile(r'set\((\w+)\s+"([^"]+)"\)')
    regex_pattern = re.compile(r'if.*MATCHES\s+"([^"]+)"')  # Regex to capture MATCHES condition
    paths = {}
    for file in cmake_files:
        file_name = os.path.splitext(os.path.basename(file))[0]  # Use filename without extension
        paths[file_name] = {'files': set(), 'regex': None, 'cmake_file_path' : file}  # Initialize a set for paths and a regex entry per cmake file
        inside_if = False
        vendor = os.path.basename(os.path.dirname(file))
        with open(file, 'r') as f:
            current_regex = None
            for line in f:
                if isGCC and 'list(APPEND local_list_include' in line:
                    
                    systemPath = line.split()[-1][:-1].replace("${vendor}", vendor)
                    if 'doc_ds' in systemPath:
                        systemPath = os.path.dirname(systemPath)
                    systemPath = os.path.join(source_dir, systemPath)
                    paths[file_name]['files'].add(systemPath)
                else:
                    if 'if(' in line and '${MCU_NAME} MATCHES' in line:
                        regex_match = regex_pattern.search(line)
                        if regex_match:
                            current_regex = regex_match.group(1)  # Capture the regex when it appears
                        inside_if = True
                    elif inside_if and line.strip() == 'endif()':
                        inside_if = False
                        if current_regex:
                            paths[file_name]['regex'] = current_regex  # Save the regex before resetting
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
                        if 'gcc_clang' in source_dir:
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
    
    for root, dirs, files in os.walk(source_dir):
        for file in files:
            if file.endswith(".cmake"):
                full_path = os.path.join(root, file)
                regexes = extract_regex_from_cmake(full_path)
                for regex in regexes:
                    if re.match(regex, check_string):
                        # If check_string matches the regex, copy the file
                        dest_file_path = os.path.join(dest_dir, file)
                        os.makedirs(os.path.dirname(dest_file_path), exist_ok=True)
                        shutil.copy(full_path, dest_file_path)

                 
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

    return lastError

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

def read_data_from_db(db, sql_query):
    import sqlite3

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

def copy_schemas(mcus, source_dir, output_dir, base_path):
    
    for mcu in mcus:
        schemas_dir = os.path.join(source_dir, 'schemas', mcu)
        dest_path = os.path.join(output_dir, base_path, 'schemas', mcu)
        if os.path.exists(schemas_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(schemas_dir, dest_path, dirs_exist_ok=True)
        
def copy_interrupts(mcus, source_dir, output_dir, base_path):
    
    for mcu in mcus:
        interrupts_dir = os.path.join(source_dir, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        dest_path = os.path.join(output_dir, base_path, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
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
                if os.path.basename(root).upper() in mcus:
                    relative_path = os.path.relpath(root, start=source_subdir)
                    full_dest_path = os.path.join(output_subdir, relative_path)
                    shutil.copytree(root, full_dest_path, dirs_exist_ok=True)
            if os.path.splitext(os.path.basename(file))[0].upper() in mcus:
                full_source_path = os.path.join(root, file)
                relative_path = os.path.relpath(full_source_path, start=source_subdir)
                full_dest_path = os.path.join(output_subdir, relative_path)
                os.makedirs(os.path.dirname(full_dest_path), exist_ok=True)
                shutil.copy(full_source_path, full_dest_path)

def copy_delays(cores, source_dir, output_dir, base_path):
    
    for core in cores:
        delays_dir = os.path.join(source_dir, 'delays', core.lower())
        dest_path = os.path.join(output_dir, base_path, 'delays', core.lower())
        if os.path.exists(delays_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(delays_dir, dest_path, dirs_exist_ok=True)

def create_archive(base_output_dir, arch, entry_name):
    """Creates a 7z archive of the specified directory with all files at the root of the archive."""
    try:
        archive_name = os.path.join(os.path.dirname(base_output_dir), f"{arch.lower()}_{entry_name.lower()}_{os.path.basename(base_output_dir)}.7z")
        print(f"Starting to create archive {archive_name}...")

        # Open the 7z file
        filters = [{'id': py7zr.FILTER_ZSTD, 'level': 3}]
        with py7zr.SevenZipFile(archive_name, mode='w', filters=filters) as archive:
            # Get all files and directories in the base_output_dir
            for folder_name, subfolders, filenames in os.walk(base_output_dir):
                for filename in filenames:
                    # Create the full file path
                    file_path = os.path.join(folder_name, filename)
                    # Add file to the archive, with the relative path set to be flat at the root
                    archive_name_inside = os.path.relpath(file_path, base_output_dir)
                    archive.write(file_path, archive_name_inside)

        print(f"Archive created successfully at {archive_name}")
        return archive_name
    except Exception as e:
        print(f"Failed to create archive due to an error: {e}")

def compress_directory_7z(base_output_dir, arch, entry_name):
    """
    Compresses the given directory into a 7z archive using the 7z command line tool.
    
    Args:
    source_dir (str): Path to the directory to be compressed.
    output_file (str): Path where the output .7z file should be saved.
    
    Returns:
    bool: True if compression was successful, False otherwise.
    """
    # Check if the source directory exists
    archive_name = os.path.join(os.path.dirname(base_output_dir), f"{arch.lower()}_{entry_name.lower()}_{os.path.basename(base_output_dir)}.7z")
    if not os.path.isdir(base_output_dir):
        print(f"The specified directory does not exist: {base_output_dir}")
        return False

    # Construct the command to compress the directory
    command = [
        '7z', 'a',  # 'a' stands for adding to an archive
        '-t7z',     # Specify 7z archive type
        '-mtc=off', # Do not store timestamps
        archive_name, # Path to the output .7z file
        os.path.join(base_output_dir, '*')  # Path to the source directory content
    ]

    # Execute the command
    try:
        subprocess.run(command, check=True)
        print(f"Archive created successfully: {archive_name}")
        return archive_name
    except subprocess.CalledProcessError as e:
        print(f"An error occurred while creating the archive: {e}")
        return None
         
async def upload_release_asset(session, token, repo, tag_name, asset_path):
    print(f"Preparing to upload asset: {os.path.basename(asset_path)}...")
    headers = {'Authorization': f'token {token}', 'Content-Type': 'application/octet-stream'}
    release_url = f"https://api.github.com/repos/{repo}/releases/tags/{tag_name}"
    async with session.get(release_url, headers=headers) as response:
        response_data = await response.json()
        release_id = response_data['id']
    upload_url = f"https://uploads.github.com/repos/{repo}/releases/{release_id}/assets?name={os.path.basename(asset_path)}"
    async with aiofiles.open(asset_path, 'rb') as f:
        data = await f.read()
    async with session.post(upload_url, headers=headers, data=data) as response:
        result = await response.json()
    print(f"Upload completed for: {os.path.basename(asset_path)}.")
    return result

async def package_asset(source_dir, output_dir, arch, entry_name, token, repo, tag_name, packages):
    
    cmake_files = find_cmake_files(os.path.join(source_dir, "cmake"))
    file_paths = parse_files_for_paths(cmake_files, source_dir, True)
    for cmake_file, data in file_paths.items():
        base_output_dir = os.path.join(output_dir, cmake_file)  # Subdirectory for this .cmake file
        # Copy the .cmake file into the package directory
        copy_cmake_files(data['cmake_file_path'], source_dir, base_output_dir, data['regex'])

        mcuNames = extract_mcu_names(cmake_file, source_dir, output_dir, data['regex'])            
        # Copy individual files
        copy_files(data['files'], base_output_dir, source_dir)
        # Copy schema directories
        
        copy_schemas(mcuNames[cmake_file]['mcu_names'],source_dir, output_dir, base_output_dir)
        copy_interrupts(mcuNames[cmake_file]['mcu_names'],source_dir, output_dir, base_output_dir)
        #copy defs
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'],source_dir, output_dir, base_output_dir, 'def')
        #copy startups
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'],source_dir, output_dir, base_output_dir, 'startup')
        #copy linker scirpts
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'],source_dir, output_dir, base_output_dir, 'linker_scripts')
        #copy delay files
        copy_delays(mcuNames[cmake_file]['cores'],source_dir, output_dir, base_output_dir)
        # #copy std_library to every package
        std_library_path = os.path.join(source_dir, 'std_library')
        if os.path.exists(std_library_path):
            shutil.copytree(std_library_path, os.path.join(base_output_dir, "std_library"), dirs_exist_ok=True)
        #copy include to every package
        include_path = os.path.join(source_dir, 'include')
        if os.path.exists(include_path):
            shutil.copytree(include_path, os.path.join(base_output_dir, "include"), dirs_exist_ok=True)
        #copy cstdio to every package
        cstdio_path = os.path.join(source_dir, 'cstdio')
        if os.path.exists(cstdio_path):
            shutil.copytree(cstdio_path, os.path.join(base_output_dir, "cstdio"), dirs_exist_ok=True)
            
        #copy common to every package
        shutil.copytree(os.path.join(source_dir, 'common'), os.path.join(base_output_dir, "common"), dirs_exist_ok=True)
        #copy base CMakeLists.txt to every package
        shutil.copy(os.path.join(source_dir, "CMakeLists.txt"), base_output_dir)
        
        #create archive            
        archivePath = compress_directory_7z(base_output_dir, arch, entry_name)
        archiveHash = hash_directory_contents(base_output_dir)
        archiveName = os.path.basename(archivePath)
        
        shutil.rmtree(base_output_dir)
        #upload archive
        
        async with aiohttp.ClientSession() as session:
            upload_tasks = [upload_release_asset(session, token, repo, tag_name, archivePath)]
            results = await asyncio.gather(*upload_tasks, return_exceptions=True)
            for result in results:
                print(result)
            print("All uploads completed.")
        packages.append({"name" : archiveName, "version" : "1.0.0", "hash" :archiveHash})

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
    url = f"https://api.github.com/repos/{repo}/releases/latest"
    headers = {'Authorization': f'token {token}'}
    response = requests.get(url, headers=headers)
    release_info = response.json()
    for asset in release_info.get('assets', []):
            if asset['name'] == 'metadata.json':
                metadata_url = asset['url']
                print("Attempting to download metadata from:", metadata_url)
                metadata_response = fetch_json_data(metadata_url, token)
                return metadata_response                
    return []

def update_metadata(current_metadata, new_files):
    
    updated_metadata = []
    print(f"Update metadata: {current_metadata}")
    print(f"New files: {new_files}")
    current_files_dict = {item['name']: item for item in current_metadata}

    for new_file in new_files:
        name = new_file['name']
        if name in current_files_dict:
            if new_file['hash'] != current_files_dict[name]['hash']:
                # Increment version
                old_version = current_files_dict[name]['version']
                version_parts = old_version.split('.')
                version_parts[-1] = str(int(version_parts[-1]) + 1)  # Increment the patch version
                new_file['version'] = '.'.join(version_parts)
        else:
            # If it's a new file, set the initial version
            new_file['version'] = "1.0.0"
        
        updated_metadata.append(new_file)
    
    return updated_metadata

async def main(token, repo, tag_name):
    architectures = ["RISCV", "PIC32", "PIC", "dsPIC", "AVR", "ARM"]
    downloadFile('https://s3-us-west-2.amazonaws.com/software-update.mikroe.com/nectostudio2/database/necto_db.db',
                            "",
                            'necto_db.db', True)
    current_metadata = fetch_current_metadata(repo, token)
    # current_metadata = fetch_current_metadata("MikroElektronika/core_packages", "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")

    packages = []
    for arch in architectures:
        root_source_directory = f"./{arch}"
        root_output_directory = f"./output/{arch}"
    # List directories directly under the root source directory
        try:
            with os.scandir(root_source_directory) as entries:
                for entry in entries:
                    if entry.is_dir():
                        source_directory = os.path.join(root_source_directory, entry.name)
                        output_directory = os.path.join(root_output_directory, entry.name)
                                            
                        print(f"Processing {source_directory} to {output_directory}")
                        await package_asset(source_directory, output_directory, arch, entry.name, token, repo, tag_name, packages)
                        
        except Exception as e:
            print(f"Failed to process directories in {root_source_directory}: {e}")

    new_metadate = update_metadata(current_metadata, packages)
    
    with open('metadata.json', 'w') as f:
        json.dump(new_metadate, f, indent=4)
    
    async with aiohttp.ClientSession() as session:
        await upload_release_asset(session, token, repo, tag_name, "metadata.json")
    
if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Upload directories as release assets.")
    parser.add_argument("token", help="GitHub Token")
    parser.add_argument("repo", help="Repository name, e.g., 'username/repo'")
    parser.add_argument("tag_name", help="Tag name from the release")
    args = parser.parse_args()
    
    print("Starting the upload process...")
    asyncio.run(main(args.token, args.repo, args.tag_name))
    # asyncio.run(main("", "", ""))
    print("Upload process completed.")
    



        

