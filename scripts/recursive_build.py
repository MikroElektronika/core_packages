import os, re, subprocess, shutil, json, sqlite3

from packaging import version

# Global variable for local_app_data_path
local_app_data_path = '/home/runner/.MIKROE/NECTOStudio7'

# Path for storing artifacts.
testPath = '/home/runner/test_results'

# Path to sdk_build_automation tool.
toolPath = '/home/runner/MikroElektronika/NECTOStudio/bin/sdk_build_automation'

# Global variable to trace failed tests.
build_failed = False

# Supported compilers list for each architecture.
compiler_list = {
    'ARM': ['gcc_arm_none_eabi', 'clang-llvm'],
    'RISCV': ['xpack-riscv-none-embed-gcc', 'clang-llvm-riscv'],
    'PIC': ['mchp_xc8'],
    'DSPIC': ['mchp_xc16'],
    'PIC32': ['mchp_xc32']
}

# Define a REGEXP function for SQLite.
def regexp(expr, item):
    # Handle the case where item is None
    if item is None:
        return False

    # Compile the regular expression and search the item
    reg = re.compile(expr)
    return reg.search(item) is not None

# Extracts the SDK version from the manifest.json file.
def get_sdk_version():
    sdk_list = []
    conn = sqlite3.connect(os.path.join(local_app_data_path, 'databases', 'necto_db.db'))

    # Create REGEXP function for python script.
    conn.create_function("REGEXP", 2, regexp)
    cursor = conn.cursor()

    cursor.execute(f"""
        SELECT uid
        FROM SDKs
        WHERE uid REGEXP "mikrosdk_v";
    """)
    rows = cursor.fetchall()
    if rows:
        sdk_list.extend([row[0] for row in rows])

    # Function to extract the numeric version from a string
    def extract_version(version_string):
        match = re.search(r'mikrosdk_v(\d+)', version_string)
        if match:
            return int(match.group(1))  # Return the version as an integer
        return -1  # Return a default value if no match is found

    return sorted(sdk_list, key=extract_version)[-1]

# Runs the bash command.
def run_cmd(cmd, changes_dict, status_key):
    global build_failed
    # Blue color for build tool command command.
    print(f"\033[94m{cmd}\033[0m")

    try:
        # Store all the output lines to print only important ones.
        output = subprocess.check_output(cmd, shell=True, text=True)
        for line in output.splitlines():
            if line.startswith("Building:"):
                changes_dict['build_status'][status_key] = 'UNDEFINED'
                # White color for the current setup build.
                print(line)
            elif "Build success!" in line:
                changes_dict['build_status'][status_key] = 'SUCCESS'
                # Green color for success.
                print("\033[92m{}\033[0m".format(line))
            elif "Build failed" in line:
                changes_dict['build_status'][status_key] = 'FAIL'
                # Red color for failure.
                print("\033[91m{}\033[0m".format(line))
                build_failed = True

    # Error handling for failed builds not to fail the job.
    except subprocess.CalledProcessError as e:
        for line in e.output.splitlines():
            if line.startswith("Building:"):
                changes_dict['build_status'][status_key] = 'UNDEFINED'
                # White color for the current setup build.
                print(line)
            elif "Build success!" in line:
                changes_dict['build_status'][status_key] = 'SUCCESS'
                # Green color for success.
                print(f"\033[92m{line}\033[0m")  # Green color for success
            elif "Build failed" in line:
                changes_dict['build_status'][status_key] = 'FAIL'
                # Red color for failure.
                print(f"\033[91m{line}\033[0m")  # Red color for failure
                build_failed = True

# Runs the build commands for each member of mcu_list, board_list, and mcu_card_list.
def run_builds(changes_dict):
    # Get the SDK version from manifest.json file.
    sdk_version = get_sdk_version()

    # Run build for all MCUs from mcu_list.
    print(f"\033[93mRunning build for {len(changes_dict['mcu_list'])} MCUs\033[0m")
    for mcu in changes_dict['mcu_list']:
        # Get the necessary compiler for the current MCU build.
        compilers = get_compilers(mcu, is_mcu=True)
        for compiler in compilers:
            cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath} --isBareMetal "1" --compiler "{compiler}" --sdk "{sdk_version}" --board "GENERIC_ARM_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
            run_cmd(cmd, changes_dict, mcu + ' ' + compiler)

# Returns the list of compilers based on the given name and type.
def get_compilers(name, is_mcu=True):
    if is_mcu:
        if any(substring in name for substring in ["ATSAM", "STM", "TM4C", "MK"]):
            return compiler_list["ARM"]
        elif any(substring in name for substring in ["GD32", "RISC"]):
            return compiler_list["RISCV"]
        elif "PIC32" in name:
            return compiler_list["PIC32"]
        elif any(substring in name for substring in ["DSPIC", "PIC24", "dsPIC"]):
            return compiler_list["DSPIC"]
        elif any(substring in name for substring in ["PIC18", "PIC16", "PIC12", "PIC10"]):
            return compiler_list["PIC"]
        elif "AT" in name and "ATSAM" not in name:
            return compiler_list["AVR"]

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

    ## Close the connection
    cur.close()
    con.close()

    ## Return query results
    return len(results), results

def get_changed_files(branch='main'):
    try:
        # Run the git diff command to get the list of changed files
        result = subprocess.run(
            ['git', 'diff', '--name-only', branch],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=True
        )

        # The output is a string of file paths separated by newlines
        changed_files = result.stdout.splitlines()

        return changed_files
    except subprocess.CalledProcessError as e:
        print(f"Error running git command: {e.stderr}")
        return []


def find_cmake_files(path):
    files = get_changed_files('main')
    cmake_files = []
    for file in files:
        if 'cmake/' in file and 'delays/' not in file and file not in cmake_files:
            cmake_files.append(file)
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
    # Use a set to avoid duplicates if the same regex appears more than once
    regexes = set()

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

# Function to replace placeholders in a single file
def replace_placeholders_in_file(source_file, dest_file, replacements):
    with open(source_file, 'r') as file:
        file_content = file.read()

    # Replace placeholders
    for placeholder, replacement in replacements.items():
        if replacement is not None:
            file_content = file_content.replace(placeholder, replacement)

    if not os.path.exists(os.path.dirname(dest_file)):
        os.makedirs(os.path.dirname(dest_file))

    # Write the updated content to the destination file
    with open(dest_file, 'w') as file:
        file.write(file_content)

def get_core_from_def(file_path):
    # Check if the file exists
    if os.path.exists(file_path):
        # Open the JSON file and load its contents
        with open(file_path, 'r') as file:
            data = json.load(file)

            # Check if the "core" key exists in the JSON data
            if 'core' in data:
                core = data['core']
                if core == 'M7EF':
                    core = 'M7'
            else:
                print(f'Warning: "core" key not found in {file_path}')
    else:
        print(f'Error: File {file_path} does not exist.')

    return core

def get_core(mcuNames, package_name, cmake_file, source_dir, changes_dict):
    for mcu_name in mcuNames[cmake_file]['mcu_names']:
        core = get_core_from_def(os.path.join(source_dir, "def", f"{mcu_name}.json"))
        mcuNames[cmake_file]['cores'].add(core)
        changes_dict['mcu_list'].append(mcu_name)

def filter_versions(versions):
    # Filter out versions that contain non-numeric characters (e.g., words or suffixes)
    filtered_versions = [v for v in versions if all(part.isdigit() for part in v.split('.'))]
    return filtered_versions

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
                                    versions = filter_versions(list(v[0] for v in sdkVersions[1]))
                                    threshold_version = version.parse(eachKey[eachTableKey][collumns[1]][:-1])
                                    filtered_versions = [f'mikrosdk_v{v.replace('.','')}' for v in versions if version.parse(v) >= threshold_version]
                                    values.append(filtered_versions)
                                # Add Packages if they are not present in the database
                                elif 'DeviceToPackage' == eachTableKey:
                                    package_uids = linkerTables['tables'][2]['DeviceToPackage']['package_uid']
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

def package_asset(source_dir, output_dir, arch, entry_name, changes_dict):
    cmake_files = find_cmake_files(source_dir)
    file_paths = parse_files_for_paths(cmake_files, source_dir, True)
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

        get_core(mcuNames, f"{arch.lower()}_{entry_name.lower()}_{cmake_file}", cmake_file, source_dir, changes_dict)
        coreQueriesPath = os.path.join(os.getcwd(), 'resources/queries')
        if os.path.exists(os.path.join(coreQueriesPath, 'mcus')):
            updateDevicesFromCore([f"{local_app_data_path}/databases/necto_db.db"], os.path.join(coreQueriesPath, 'mcus'))

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

        # Finally copy everthing to AppData location
        shutil.copytree(base_output_dir, os.path.join(local_app_data_path, "packages", "core", arch, entry_name, f"{arch.lower()}_{entry_name.lower()}_{cmake_file}"))

        # Copy packages to artifacts as well
        shutil.copytree(base_output_dir, os.path.join(testPath, "packages", f"{arch.lower()}_{entry_name.lower()}_{cmake_file}"))

# Writes the result dictionary to a JSON file and ensures testPath exists.
def write_results_to_file(changes_dict):
    os.makedirs(testPath, exist_ok=True)

    with open(f'{testPath}/built_changes.json', 'w+') as json_file:
        json.dump(changes_dict, json_file, indent=4)

    print(f"All the data for build has been written to {testPath}/built_changes.json")

def main():
    files = get_changed_files('main')
    archs = []
    architectures = ["ARM", "RISCV", "PIC32", "PIC", "dsPIC", "AVR"]
    valid_entries = ["gcc_clang", "XC32", "XC16", "XC8"]
    for file in files:
        for architecture in architectures:
            if architecture in file and architecture not in archs:
                archs.append(architecture)
    changes_dict = {
        'mcu_list': [],
        'build_status': {}
    }

    for arch in archs:
        root_source_directory = f"./{arch}"
        root_output_directory = f"./output/{arch}"
        # List directories directly under the root source directory
        try:
            with os.scandir(root_source_directory) as entries:
                print(entries)
                for entry in entries:
                    # Don't process packaging for the MikroC entries
                    if entry.name not in valid_entries:
                        continue
                    print(root_source_directory)
                    print(entry)
                    if entry.is_dir():
                        source_directory = os.path.join(root_source_directory, entry.name)
                        output_directory = os.path.join(root_output_directory, entry.name)

                        print(f"Processing {source_directory} to {output_directory}")
                        package_asset(source_directory, output_directory, arch, entry.name, changes_dict)
        except Exception as e:
            print(f"Failed to process directories in {root_source_directory}: {e}")
            print("\033[93mSomething went wrong while configuring the packages, chack manually.\033[0m")

    print("\033[93mAll requested core packages have been generated successfully.\033[0m")
    run_builds(changes_dict)

    # Write all the used info for building to artifact folder.
    write_results_to_file(changes_dict)

    shutil.copyfile(os.path.join(local_app_data_path, 'databases', 'necto_db.db'), os.path.join(testPath, 'necto_db.db'))

    if build_failed == True:
        # Red text for failure.
        print("\033[91mRecursive Build Failed!\033[0m")
        # Fail the job as well.
        exit(1)
    else:
        # Green text for success.
        print("\033[92mRecursive Build Success!\033[0m")


if __name__ == "__main__":
    main()
