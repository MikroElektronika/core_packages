import os, io, json, requests

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

def extract_archive_from_url(url, destination, token = None):
    """
    Extract the contents of an archive (7z or zip) from a URL directly
    in memory, without downloading the file.
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
