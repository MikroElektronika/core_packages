import subprocess
import os
import shutil
import re
import requests
import json
from pathlib import Path
import argparse
import aiohttp
import asyncio
import aiofiles
import hashlib



# Define constants for excluded files
EXCLUDED_FILES = {
    'coreUtils.cmake',
    'ExportConfig.cmake.in',
    'InstallHeaders.cmake.in',
    'mikroeExportConfig.cmake.in'
}

def find_cmake_files(directory):
    """Return a list of .cmake files in the directory, excluding specific files."""
    cmake_files = []
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith(".cmake") and 'delays' not in root and file not in EXCLUDED_FILES:
                cmake_files.append(os.path.join(root, file))
    return cmake_files

def parse_files_for_paths(cmake_files, source_dir, isGCC=None):
    """Parse cmake files to extract paths, directory contents, and regex for folder names inside if blocks."""
    path_pattern = re.compile(r'set\((\w+)\s+"([^"]+)"\)')
    regex_pattern = re.compile(r'if.*MATCHES\s+"([^"]+)"')
    paths = {}
    for file in cmake_files:
        file_name = os.path.splitext(os.path.basename(file))[0]
        paths[file_name] = {'files': set(), 'regex': None, 'cmake_file_path': file}
        inside_if = False
        vendor = os.path.basename(os.path.dirname(file))
        with open(file, 'r') as f:
            current_regex = None
            for line in f:
                if isGCC and 'list(APPEND local_list_include' in line:
                    systemPath = line.split()[-1][:-1].replace("${vendor}", vendor)
                    systemPath = os.path.dirname(systemPath) if 'doc_ds' in systemPath else systemPath
                    systemPath = os.path.join(source_dir, systemPath)
                    paths[file_name]['files'].add(systemPath)
                elif 'if(' in line and '${MCU_NAME} MATCHES' in line:
                    regex_match = regex_pattern.search(line)
                    if regex_match:
                        current_regex = regex_match.group(1)
                    inside_if = True
                elif inside_if and line.strip() == 'endif()':
                    inside_if = False
                    if current_regex:
                        paths[file_name]['regex'] = current_regex
                        current_regex = None
                elif inside_if:
                    matches = path_pattern.search(line)
                    if matches:
                        key, value = matches.groups()
                        full_path = os.path.join(source_dir, value)
                        if key == "SYSTEM_LIB_INCLUDE_DIR" and value:
                            if os.path.isdir(full_path):
                                for root, _, files in os.walk(full_path):
                                    for file in files:
                                        paths[file_name]['files'].add(os.path.join(root, file))
                            continue
                        paths[file_name]['files'].add(full_path)
    return paths

def copy_files(files, output_dir, source_dir):
    """Copy individual files from source_paths to output_dir keeping the folder structure."""
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
    """Copy specific interrupt files that should be included in every package."""
    for filename, subdir in [('interrupts.h', 'include'), ('interrupts.c', '')]:
        source_file = os.path.join(source_dir, 'interrupts', subdir, filename)
        dest_dir = os.path.join(output_dir, 'interrupts', subdir)
        os.makedirs(dest_dir, exist_ok=True)
        shutil.copy(source_file, dest_dir)

def extract_mcu_names(file_name, source_dir, regex):
    """Extract MCU names and cores based on regex."""
    mcus = {file_name: {'mcu_names': set(), 'cores': set()}}
    source_subdir = os.path.join(source_dir, 'def')
    regex_pattern = re.compile(regex, re.IGNORECASE) if regex else None

    if regex_pattern:
        for root, _, files in os.walk(source_subdir):
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
    """Find and return the filename of the first file that matches a given regex in the 'def' directory."""
    if not regex:
        return None
    regex_pattern = re.compile(regex)
    def_dir = os.path.join(source_dir, 'def')
    for root, _, files in os.walk(def_dir):
        for file in files:
            if file.endswith('.json') and regex_pattern.search(os.path.splitext(file)[0]):
                return os.path.splitext(file)[0]
    return None

def extract_regex_from_cmake(cmake_file):
    """Extract regex patterns from a given .cmake file."""
    regex_pattern = re.compile(r'\$\{MCU_NAME\}\s*MATCHES\s*"(.*?)"')
    regexes = set()
    with open(cmake_file, 'r') as file:
        content = file.read()
    if_conditions = re.findall(r'if\s*\((.*?)\)\s*endif', content, re.DOTALL)
    for condition in if_conditions:
        matches = regex_pattern.findall(condition)
        regexes.update(matches)
    return list(regexes)

def copy_files_based_on_regex(source_dir, dest_dir, check_string):
    """Copy files where check_string matches any regex found in .cmake files."""
    if not check_string:
        return
    for root, _, files in os.walk(source_dir):
        for file in files:
            if file.endswith(".cmake"):
                full_path = os.path.join(root, file)
                regexes = extract_regex_from_cmake(full_path)
                for regex in regexes:
                    if re.match(regex, check_string):
                        dest_file_path = os.path.join(dest_dir, file)
                        os.makedirs(os.path.dirname(dest_file_path), exist_ok=True)
                        shutil.copy(full_path, dest_file_path)

def copy_cmake_files(cmake_file, source_dir, output_dir, regex):
    """Copy the .cmake file to the output directory maintaining the same folder structure."""
    relative_path = os.path.relpath(cmake_file, start=source_dir)
    destination_path = os.path.join(output_dir, relative_path)
    os.makedirs(os.path.dirname(destination_path), exist_ok=True)
    shutil.copy(cmake_file, destination_path)

    shutil.copy(os.path.join(source_dir, "cmake/coreUtils.cmake"), os.path.join(output_dir, "cmake"))
    for config_file in ["mikroeExportConfig.cmake.in", "ExportConfig.cmake.in", "InstallHeaders.cmake.in"]:
        config_path = os.path.join(source_dir, "cmake", config_file)
        if os.path.exists(config_path):
            shutil.copy(config_path, os.path.join(output_dir, "cmake"))
    if 'gcc_clang' in source_dir:
        mcuFileName = find_first_matching_mcu_name(source_dir, regex)
        delays_cmake_dir = os.path.join(os.path.dirname(cmake_file), 'delays')
        delay_relative_path = os.path.relpath(delays_cmake_dir, start=source_dir)
        delay_destination_path = os.path.join(output_dir, delay_relative_path)
        copy_files_based_on_regex(delays_cmake_dir, delay_destination_path, mcuFileName)

def check_file_on_disk(file_name):
    return Path(file_name).is_file()

def download_file(download_link, output_dir, output_file_name, verify_download):
    """Download a file and verify its presence."""
    full_path = os.path.join(output_dir, output_file_name)
    os.makedirs(output_dir, exist_ok=True)
    try:
        response = requests.get(download_link, stream=True)
        response.raise_for_status()
        with open(full_path, 'wb') as f:
            for chunk in response.iter_content(chunk_size=8192):
                f.write(chunk)
        if verify_download:
            return check_file_on_disk(full_path)
    except requests.RequestException as e:
        print(f"Error downloading file: {e}")
        return -1
    return 0

def fetch_json_data(download_link, token):
    """Fetch JSON data from the specified URL using an authorization token."""
    headers = {'Authorization': f'Bearer {token}', 'Accept': 'application/octet-stream'}
    try:
        response = requests.get(download_link, headers=headers)
        response.raise_for_status()
        return response.json(), None
    except requests.RequestException as e:
        print(f"Error fetching JSON data: {e}")
        return None, str(e)

def function_regex(value, pattern):
    return re.compile(r"\b" + pattern.lower() + r"\b").search(value) is not None

def read_data_from_db(db, sql_query):
    """Read data from a database."""
    import sqlite3
    with sqlite3.connect(db) as con:
        con.create_function("REGEXP", 2, function_regex)
        cur = con.cursor()
        results = cur.execute(sql_query).fetchall()
        return len(results), results

def copy_schemas(mcus, source_dir, output_dir, base_path):
    """Copy schema directories."""
    for mcu in mcus:
        schemas_dir = os.path.join(source_dir, 'schemas', mcu)
        dest_path = os.path.join(output_dir, base_path, 'schemas', mcu)
        if os.path.exists(schemas_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(schemas_dir, dest_path, dirs_exist_ok=True)

def copy_interrupts(mcus, source_dir, output_dir, base_path):
    """Copy interrupt files."""
    for mcu in mcus:
        interrupts_dir = os.path.join(source_dir, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        dest_path = os.path.join(output_dir, base_path, 'interrupts', 'include', 'interrupts_mcu', mcu.lower())
        if os.path.exists(interrupts_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(interrupts_dir, dest_path, dirs_exist_ok=True)
    copy_interrupt_files(source_dir, base_path)

def copy_files_from_dir(mcus, source_dir, output_dir, base_path, subdirectory):
    """Copy files from a specific subdirectory."""
    source_subdir = os.path.join(source_dir, subdirectory)
    output_subdir = os.path.join(base_path, subdirectory)
    for root, _, files in os.walk(source_subdir):
        for file in files:
            if os.path.basename(file) == 'mcu.h' and os.path.basename(root).upper() in mcus:
                relative_path = os.path.relpath(root, start=source_subdir)
                full_dest_path = os.path.join(output_subdir, relative_path)
                shutil.copytree(root, full_dest_path, dirs_exist_ok=True)
            elif os.path.splitext(os.path.basename(file))[0].upper() in mcus:
                full_source_path = os.path.join(root, file)
                relative_path = os.path.relpath(full_source_path, start=source_subdir)
                full_dest_path = os.path.join(output_subdir, relative_path)
                os.makedirs(os.path.dirname(full_dest_path), exist_ok=True)
                shutil.copy(full_source_path, full_dest_path)

def copy_delays(cores, source_dir, output_dir, base_path):
    """Copy delay files."""
    for core in cores:
        delays_dir = os.path.join(source_dir, 'delays', core.lower())
        dest_path = os.path.join(output_dir, base_path, 'delays', core.lower())
        if os.path.exists(delays_dir):
            os.makedirs(dest_path, exist_ok=True)
            shutil.copytree(delays_dir, dest_path, dirs_exist_ok=True)

def compress_directory_7z(base_output_dir, arch, entry_name):
    """Compress the given directory into a 7z archive using the 7z command line tool."""
    archive_name = os.path.join(os.path.dirname(base_output_dir), f"{arch.lower()}_{entry_name.lower()}_{os.path.basename(base_output_dir)}.7z")
    if not os.path.isdir(base_output_dir):
        print(f"The specified directory does not exist: {base_output_dir}")
        return None

    command = [
        '7z', 'a', '-t7z', '-mx3', '-mtc=off', archive_name, os.path.join(base_output_dir, '*')
    ]

    try:
        subprocess.run(command, check=True)
        print(f"Archive created successfully: {archive_name}")
        return archive_name
    except subprocess.CalledProcessError as e:
        print(f"An error occurred while creating the archive: {e}")
        return None

async def upload_release_asset(session, token, repo, tag_name, asset_path):
    """Upload an asset to a GitHub release."""
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
    """Package an asset and upload it to GitHub."""
    cmake_files = find_cmake_files(os.path.join(source_dir, "cmake"))
    file_paths = parse_files_for_paths(cmake_files, source_dir, True)
    for cmake_file, data in file_paths.items():
        base_output_dir = os.path.join(output_dir, cmake_file)
        copy_cmake_files(data['cmake_file_path'], source_dir, base_output_dir, data['regex'])

        mcuNames = extract_mcu_names(cmake_file, source_dir, data['regex'])
        copy_files(data['files'], base_output_dir, source_dir)
        copy_schemas(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir)
        copy_interrupts(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir)
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'def')
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'startup')
        copy_files_from_dir(mcuNames[cmake_file]['mcu_names'], source_dir, output_dir, base_output_dir, 'linker_scripts')
        copy_delays(mcuNames[cmake_file]['cores'], source_dir, output_dir, base_output_dir)

        for common_dir in ['std_library', 'include', 'cstdio', 'common']:
            common_path = os.path.join(source_dir, common_dir)
            if os.path.exists(common_path):
                shutil.copytree(common_path, os.path.join(base_output_dir, common_dir), dirs_exist_ok=True)
        shutil.copy(os.path.join(source_dir, "CMakeLists.txt"), base_output_dir)

        archive_path = compress_directory_7z(base_output_dir, arch, entry_name)
        archive_hash = hash_directory_contents(base_output_dir)
        archive_name = os.path.basename(archive_path)

        shutil.rmtree(base_output_dir)
        async with aiohttp.ClientSession() as session:
            upload_tasks = [upload_release_asset(session, token, repo, tag_name, archive_path)]
            results = await asyncio.gather(*upload_tasks, return_exceptions=True)
            for result in results:
                print(result)
            print("All uploads completed.")
        packages.append({"name": archive_name, "version": "1.0.0", "hash": archive_hash})

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
    for root, _, files in os.walk(directory):
        for filename in sorted(files):
            file_path = os.path.join(root, filename)
            file_hash = hash_file(file_path)
            all_hashes.append(file_hash)
    combined_hash = hashlib.md5("".join(all_hashes).encode()).hexdigest()
    return combined_hash

def fetch_current_metadata(repo, token):
    """Fetch the current metadata from GitHub."""
    url = f"https://api.github.com/repos/{repo}/releases"
    headers = {'Authorization': f'token {token}'}
    response = requests.get(url, headers=headers)
    releases = response.json()
    if len(releases) > 1:
        previous_release = releases[1]
        for asset in previous_release.get('assets', []):
            if asset['name'] == 'metadata.json':
                metadata_url = asset['url']
                return fetch_json_data(metadata_url, token)
    return []

def update_metadata(current_metadata, new_files, version):
    """Update the metadata with new file information."""
    updated_metadata = []
    current_files_dict = {item['name']: item for item in current_metadata}
    for new_file in new_files:
        name = new_file['name']
        if name in current_files_dict and new_file['hash'] != current_files_dict[name]['hash']:
            new_file['version'] = version
        else:
            new_file['version'] = "1.0.0"
        updated_metadata.append(new_file)
    return updated_metadata

async def main(token, repo, tag_name):
    architectures = ["RISCV", "PIC32", "PIC", "dsPIC", "AVR", "ARM"]
    download_file('https://s3-us-west-2.amazonaws.com/software-update.mikroe.com/nectostudio2/database/necto_db.db', "", 'necto_db.db', True)
    current_metadata = fetch_current_metadata(repo, token)

    packages = []
    for arch in architectures:
        root_source_directory = f"./{arch}"
        root_output_directory = f"./output/{arch}"
        try:
            with os.scandir(root_source_directory) as entries:
                for entry in entries:
                    if entry.is_dir():
                        source_directory = os.path.join(root_source_directory, entry.name)
                        output_directory = os.path.join(root_output_directory, entry.name)
                        await package_asset(source_directory, output_directory, arch, entry.name, token, repo, tag_name, packages)
        except Exception as e:
            print(f"Failed to process directories in {root_source_directory}: {e}")

    new_metadata = update_metadata(current_metadata, packages, tag_name.replace("v", ""))
    with open('metadata.json', 'w') as f:
        json.dump(new_metadata, f, indent=4)
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
    print("Upload process completed.")
