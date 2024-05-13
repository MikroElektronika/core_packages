import os
import shutil
import re
import urllib.request
import json
from pathlib import Path
import py7zr

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
    if outputDir:
        os.makedirs(outputDir, exist_ok=True)

    urllib.request.urlretrieve(downloadLink, outputDir + outputFileName)
    if verifyDownload:
        lastError = checkFileOnDisk(outputDir + outputFileName)

    return lastError

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
        with py7zr.SevenZipFile(archive_name, mode='w') as archive:
            # Get all files and directories in the base_output_dir
            for folder_name, subfolders, filenames in os.walk(base_output_dir):
                for filename in filenames:
                    # Create the full file path
                    file_path = os.path.join(folder_name, filename)
                    # Add file to the archive, with the relative path set to be flat at the root
                    archive_name_inside = os.path.relpath(file_path, base_output_dir)
                    archive.write(file_path, archive_name_inside)

        print(f"Archive created successfully at {archive_name}")

    except Exception as e:
        print(f"Failed to create archive due to an error: {e}")
   
def main(source_dir, output_dir, arch, entry_name):
    
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
        create_archive(base_output_dir, arch, entry_name)
        shutil.rmtree(base_output_dir)

architectures = ["RISCV", "PIC32", "PIC", "dsPIC", "AVR", "ARM"]
downloadFile('https://s3-us-west-2.amazonaws.com/software-update.mikroe.com/nectostudio2/database/necto_db.db',
                        "",
                        'necto_db.db', True)

for arch in architectures:
    root_source_directory = f"/home/software/GIT/core_packages/{arch}"
    root_output_directory = f"/home/software/test_dir/{arch}"
# List directories directly under the root source directory
    try:
        with os.scandir(root_source_directory) as entries:
            for entry in entries:
                if entry.is_dir():
                    source_directory = os.path.join(root_source_directory, entry.name)
                    output_directory = os.path.join(root_output_directory, entry.name)
                                        
                    print(f"Processing {source_directory} to {output_directory}")
                    main(source_directory, output_directory, arch, entry.name)
    except Exception as e:
        print(f"Failed to process directories in {root_source_directory}: {e}")

    



        

