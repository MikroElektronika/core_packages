import json
import requests
import py7zr
import io
import os
import re
import sqlite3
import subprocess

# Path to the necto_db.db file.
dbPath = '/home/runner/.MIKROE/NECTOStudio7/databases/necto_db.db'

# Path for storing artifacts.
testPath = '/home/runner/test_results'

# Path to sdk_build_automation tool.
toolPath = '/home/runner/MikroElektronika/NECTOStudio/bin'

# Global variable to trace failed tests.
build_failed = False

# Supported compilers list for each architecture.
compiler_list = {
    'ARM': ['gcc_arm_none_eabi', 'clang-llvm', 'mikrocarm'],
    'RISCV': ['xpack-riscv-none-embed-gcc', 'clang-llvm-riscv'],
    'PIC': ['mchp_xc8', 'mikrocpic'],
    'DSPIC': ['mchp_xc16', 'mikrocdspic'],
    'PIC32': ['mchp_xc32', 'mikrocpic32'],
    'AVR': ['mikrocavr']
}

# Repo information.
REPO_OWNER = 'MikroElektronika'
REPO_NAME = 'core_packages'

# Returns the list of compilers based on the given name and type.
def get_compilers(name):
    if any(substring in name for substring in ["ATSAM", "STM", "TM4C", "MK"]):
        return compiler_list["ARM"], "ARM"
    elif "GD32" in name:
        return compiler_list["RISCV"], "RISCV"
    elif "PIC32" in name:
        return compiler_list["PIC32"], "PIC32"
    elif any(substring in name for substring in ["DSPIC", "PIC24", "dsPIC"]):
        return compiler_list["DSPIC"], "DSPIC"
    elif any(substring in name for substring in ["PIC18", "PIC16", "PIC12", "PIC10"]):
        return compiler_list["PIC"], "PIC"
    elif "AT" in name and "ATSAM" not in name:
        return compiler_list["AVR"], "AVR"
    
def get_all_mcus(sdk_version):
    mcu_list = []
    conn = sqlite3.connect(dbPath)
    cursor = conn.cursor()

    cursor.execute(f"""
        SELECT SDKToDevice.device_uid
        FROM SDKToDevice
        INNER JOIN Devices ON SDKToDevice.device_uid = Devices.uid
        WHERE SDKToDevice.sdk_uid = '{sdk_version}'
        AND SDKToDevice.device_uid NOT LIKE '%PIM%'
        AND SDKToDevice.device_uid NOT LIKE '%CARD%'
        AND SDKToDevice.device_uid NOT LIKE '%SPARKFUN%'
        AND SDKToDevice.device_uid NOT LIKE '%SIBRAIN%';
    """)
    rows = cursor.fetchall()
    if rows:
        mcu_list.extend([row[0] for row in rows])
    mcu_list[:] = sorted(mcu_list)

    conn.close()

    return mcu_list

# Function to extract numeric value after 'mikrosdk_v'.
def extract_version_number(uid):
    match = re.search(r'_v(\d+)', uid)
    return int(match.group(1)) if match else 0

# Extracts the SDK version from the manifest.json file.
def get_sdk_version():
    # Connect to the database.
    conn = sqlite3.connect(dbPath)
    cursor = conn.cursor()

    cursor.execute(f"""
        SELECT uid
        FROM SDKs
        WHERE installed = '1';
    """)
    sdk_versions = cursor.fetchall()

    # Sort the SDK versions based on the extracted numeric value and get the highest one
    latest_sdk = max(sdk_versions, key=lambda x: extract_version_number(x[0]))[0]

    conn.close()

    return latest_sdk

# Runs the bash command.
def run_cmd(cmd):
    global build_failed
    # Blue color for build tool command command.
    print(f"\033[94m{cmd}\033[0m")
    
    try:
        # Store all the output lines to print only important ones.
        output = subprocess.check_output(cmd, shell=True, text=True)
        for line in output.splitlines():
            if line.startswith("Building:"):

                # White color for the current setup build.
                print(line)
            elif "Build success!" in line:

                # Green color for success.
                print("\033[92m{}\033[0m".format(line))
            elif "Build failed" in line:

                # Red color for failure.
                print("\033[91m{}\033[0m".format(line))
                build_failed = True

    # Error handling for failed builds not to fail the job.
    except subprocess.CalledProcessError as e:
        for line in e.output.splitlines():
            if line.startswith("Building:"):

                # White color for the current setup build.
                print(line)
            elif "Build success!" in line:

                # Green color for success.
                print(f"\033[92m{line}\033[0m")
            elif "Build failed" in line:

                # Red color for failure.
                print(f"\033[91m{line}\033[0m")
                build_failed = True

# Runs recursive builds.
def run_builds(compiler_mcu_map):
    sdk = get_sdk_version()
    if compiler_mcu_map != {}:
        # Run build for all MCUs from compiler_mcu_map.
        print(f"\033[93mRunning build for {len(compiler_mcu_map)} architectures\033[0m")
        for architecture, compilers in compiler_mcu_map.items():
            print(f"\033[93mRunning build for {len(compilers)} compilers with {architecture} architecture\033[0m")
            for compiler, mcus in compilers.items():
                print(f"\033[93mRunning build for {len(mcus)} MCUs with {compiler}\033[0m")
                for mcu in mcus:
                    cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "1" --compiler "{compiler}" --sdk "{sdk}" --board "GENERIC_{architecture}_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
                    run_cmd(cmd)
    else:
        mcu_list = get_all_mcus(sdk)

        # Run build for all MCUs from mcu_list.
        print(f"\033[93mRunning build for {len(mcu_list)} MCUs\033[0m")
        for mcu in mcu_list:
            # Get the necessary compiler for the current MCU build.
            compilers, architecture = get_compilers(mcu)
            for compiler in compilers:
                cmd = f'xvfb-run --auto-servernum --server-num=1 {toolPath}/sdk_build_automation --isBareMetal "1" --compiler "{compiler}" --sdk "{sdk}" --board "GENERIC_{architecture}_BOARD" --mcu "{mcu}" --installPrefix "{testPath}/mcu_build/{compiler}"'
                run_cmd(cmd)
        

# Fetches metadata.json from release.
def fetch_json(url):
    response = requests.get(url)
    response.raise_for_status()
    return response.json()

# Gets 2 latest releases.
def get_latest_releases(owner, repo):
    releases_url = f'https://api.github.com/repos/{owner}/{repo}/releases'
    response = requests.get(releases_url)
    response.raise_for_status()
    releases = response.json()

    # Get the latest two releases.
    return releases[:2]

# Downloads the file.
def download_file(url):
    response = requests.get(url)
    response.raise_for_status()
    return response.content

# Compares hashes in metadata.json
def compare_hashes(metadata_1, metadata_2):
    hash_diff_names = []
    dict_1 = {item['name']: item['hash'] for item in metadata_1}
    dict_2 = {item['name']: item['hash'] for item in metadata_2}
    
    for name in dict_1:
        if name in dict_2 and dict_1[name] != dict_2[name]:
            hash_diff_names.append(name)
    
    return hash_diff_names

# Extracts the files from archive.
def extract_docs_archive(content, extract_to='docs'):
    with py7zr.SevenZipFile(io.BytesIO(content), mode='r') as z:
        z.extractall(path=extract_to)

# Maps architecture with compilers and MCUs.
def find_mcus_and_toolchains(extract_path, names):
    toolchain_mcu_map = {}

    for name in names:
        # Split the name to get architecture and toolchain.
        parts = name.split('_')

        # The first part is the architecture.
        architecture = parts[0].upper()
        if architecture == 'DSPIC':
            # Make 'ds' lower case.
            architecture = 'dsPIC'

        # The second part is the toolchain.
        toolchain = parts[1]
        if toolchain == 'gcc':
            toolchain = 'gcc_clang'
        elif toolchain == 'mikroc':
            toolchain = 'mikroC'
        elif toolchain.startswith('xc'):
            toolchain = toolchain.upper()

        # Construct the path to the JSON file.
        json_folder_path = os.path.join(extract_path, architecture)
        json_file_path = None

        # Search for the JSON file inside the architecture folder.
        for root, dirs, files in os.walk(json_folder_path):
            for file in files:
                if toolchain in file:
                    json_file_path = os.path.join(root, file)
                    break
            if json_file_path:
                break

        # If the JSON file is found, extract the required data.
        if json_file_path and os.path.exists(json_file_path):
            with open(json_file_path, 'r') as f:
                data = json.load(f)
                for obj in data:
                    if name in obj:
                        mcus = obj[name].get('mcus', [])
                        toolchain = obj[name].get('toolchain', '')

                        if architecture not in toolchain_mcu_map:
                            toolchain_mcu_map[architecture] = {}

                        compilers = compiler_list.get(architecture.upper(), [])
                        for compiler in compilers:
                            if toolchain == 'gcc_clang':
                                if 'gcc' in compiler or 'clang' in compiler:
                                    if compiler in toolchain_mcu_map[architecture]:
                                        toolchain_mcu_map[architecture][compiler].extend(mcus)
                                    else:
                                        toolchain_mcu_map[architecture][compiler] = mcus
                            else:
                                if toolchain in compiler:
                                    if compiler in toolchain_mcu_map[architecture]:
                                        toolchain_mcu_map[architecture][compiler].extend(mcus)
                                    else:
                                        toolchain_mcu_map[architecture][compiler] = mcus

    # Remove duplicates from each list in the map.
    for architecture in toolchain_mcu_map:
        for toolchain in toolchain_mcu_map[architecture]:
            toolchain_mcu_map[architecture][toolchain] = list(set(toolchain_mcu_map[architecture][toolchain]))

    return toolchain_mcu_map

def main():
    global build_failed

    # Dictionary for architecture-compiler-mcu dependencies
    compiler_mcu_map = {}

    # Create testPath if it does not exist.
    os.makedirs(testPath, exist_ok=True)

    # Check if it's a job for global build or not.
    if os.getenv('BUILD_ALL') == '0':
        # Get the latest two releases.
        latest_releases = get_latest_releases(REPO_OWNER, REPO_NAME)
        
        # Get the URLs for metadata.json files.
        metadata_url_release_1 = None
        metadata_url_release_2 = None
        docs_url_latest_release = None

        if len(latest_releases) >= 2:
            for asset in latest_releases[1]['assets']:
                if asset['name'] == 'metadata.json':
                    metadata_url_release_1 = asset['browser_download_url']

            for asset in latest_releases[0]['assets']:
                if asset['name'] == 'metadata.json':
                    metadata_url_release_2 = asset['browser_download_url']
                if asset['name'] == 'docs.7z':
                    docs_url_latest_release = asset['browser_download_url']
        
        if not metadata_url_release_1 or not metadata_url_release_2 or not docs_url_latest_release:
            
            # Error handling if we couldn't find 2 latest releases.
            print("Required files not found in the releases.")
            return

        # Fetch the metadata.json files.
        metadata_1 = fetch_json(metadata_url_release_1)
        metadata_2 = fetch_json(metadata_url_release_2)
        
        # Compare hashes and find differing names.
        differing_names = compare_hashes(metadata_1, metadata_2)
        
        # Download and extract docs.7z archive from the latest release.
        docs_content = download_file(docs_url_latest_release)
        extract_docs_archive(docs_content)
        
        # Find architectures, mcus and toolchains from the extracted docs.
        compiler_mcu_map = find_mcus_and_toolchains('docs', differing_names)

    run_builds(compiler_mcu_map)
    
    # Save the results to a JSON file.
    with open(f"{testPath}/built_changed.json", "w") as outfile:
        json.dump(compiler_mcu_map, outfile, indent=4)

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
