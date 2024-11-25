import os, re, io, json, requests, sqlite3

def get_previous_release(releases, prerelases=None):
    ''' Fetch the previously released version '''
    for counter, release in enumerate(releases):
        if not release['draft']:
            if prerelases:
                if release['prerelease']:
                    continue
            if counter + 1 < len(releases):
                return releases[counter + 1]
            else:
                return None
    return None

def get_specified_release(releases, release_version):
    ''' Fetch the latest released version '''
    return next((release for release in releases if release_version == release['tag_name']), None)

def get_latest_release(releases):
    ''' Fetch the latest released version '''
    return next((release for release in releases if not release['prerelease'] and not release['draft']), None)

def determine_archive_type(byte_stream):
    '''
    Implement logic to determine the archive type, e.g., by file extension or magic number
    For simplicity, let's assume byte_stream has a 'name' attribute (e.g., a file-like object)
    '''
    byte_stream.seek(0)
    signature = byte_stream.read(4)
    byte_stream.seek(0)
    if signature == b'PK\x03\x04':  # ZIP magic number, it is what it is
        return 'zip'
    else:
        return '7z'

def download_file_from_link(url, destination, token = None):
    """
    Dwonload from a URL directly
    in memory, and save to file.
    """
    print(f"Download link: {url}")
    headers = {
        'Authorization': f'token {token}',
        'Accept': 'application/octet-stream'
    }
    if 'github' in url:
        response = requests.get(url, headers=headers, stream=True)
    else:
        response = requests.get(url, stream=True)

    response.raise_for_status()

    if response.status_code == 200: ## Response OK?
        with io.BytesIO() as byte_stream:

            for chunk in response.iter_content(chunk_size=8192):
                byte_stream.write(chunk)

            byte_stream.seek(0)

            with open(destination, 'wb') as archive:
                archive.write(byte_stream.read())
    else:
        raise Exception(f"Failed to download file: status code {response.status_code}")

def extract_archive_from_url(url, destination, token = None):
    """
    Extract the contents of an archive (7z or zip) from a URL directly
    in memory, without downloading the file.
    """
    print(f"Download link: {url}")
    headers = {
        'Authorization': f'token {token}',
        'Accept': 'application/octet-stream',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/50.0.2661.102 Safari/537.36'
    }
    if 'github' in url:
        response = requests.get(url, headers=headers, stream=True)
    else:
        response = requests.get(url, stream=True)

    response.raise_for_status()

    if response.status_code == 200: ## Response OK?
        with io.BytesIO() as byte_stream:

            for chunk in response.iter_content(chunk_size=8192):
                byte_stream.write(chunk)

            byte_stream.seek(0)

            archive_type = determine_archive_type(byte_stream)

            if archive_type == '7z':
                import py7zr
                with py7zr.SevenZipFile(byte_stream, mode='r') as archive:
                    archive.extractall(path=destination)
            elif archive_type == 'zip':
                import zipfile
                with zipfile.ZipFile(byte_stream, mode='r') as archive:
                    for info in archive.infolist():
                        archive.extract(info, path=destination)
            else:
                raise ValueError("Unsupported archive type")
    else:
        raise Exception(f"Failed to download file: status code {response.status_code}")

def fetch_package_mcus(check_path):
    json_files = []
    for root, dirs, files in os.walk(check_path):
        for file in files:
            if file.endswith('full.json'):
                json_files.append(os.path.join(root, file))
    return json_files

def fetch_mcu_list(package_name, file_list):
    for each_file in file_list:
        with open(each_file, 'r') as json_file:
            json_file_content = json.load(json_file)
        json_file.close()
        for item in json_file_content:
            if package_name in item:
                return item[package_name]["mcus"]
    return None

def fetch_sdk_version(db, version='latest'):
    def functionRegex(value, pattern):
        reg = re.compile(value)
        return reg.search(pattern) is not None

    ## Open the database / connect to it
    con = sqlite3.connect(db)
    cur = con.cursor()

    ## Create the REGEXP function to be used in DB
    con.create_function("REGEXP", 2, functionRegex)

    ## Execute the desired query
    results = cur.execute('SELECT DISTINCT version from SDKs WHERE uid NOT LIKE "%legacy%"').fetchall()
    # results = cur.fetchall()

    ## Close the connection
    cur.close()
    con.close()

    from packaging.version import Version, InvalidVersion
    valid_versions = []
    for v in results:
        try:
            # Check if the version is valid
            valid_versions.append(Version(v[0]))
        except InvalidVersion:
            # Skip invalid versions
            continue
    if valid_versions:
        if 'latest' == version:
            return max(valid_versions).base_version
        else:
            for current_version in valid_versions:
                if current_version == version:
                    return current_version

    return None
