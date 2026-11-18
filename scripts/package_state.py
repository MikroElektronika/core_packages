'''
What is already published, so the packaging scripts pack and upload only the packages that changed.

metadata.json (uploaded to the general "Release vX.Y.Z" release) lists every MCU package with its
content hash and the release it lives in ("release_tag"). A package whose freshly assembled content
hashes the same as its published entry is not compressed or uploaded again: its published entry is
carried over to the new metadata.json, so it keeps its release, download link and version.

The content hash is computed without assembling the package (virtual_package_hash): only packages
whose hash changed are copied together and compressed. With a re-release request, packages of the
releases that were not requested are not even hashed.
'''

import contextlib
import hashlib
import os
import shutil

import requests

API = 'https://api.github.com'


def _headers(token):
    return {'Authorization': f'token {token}', 'Accept': 'application/vnd.github+json'}


def _all_releases(repo, token):
    releases, page = [], 1
    while True:
        response = requests.get(f'{API}/repos/{repo}/releases', headers=_headers(token), params={'per_page': 100, 'page': page}, timeout=60)
        response.raise_for_status()
        batch = response.json()
        releases.extend(batch)
        if len(batch) < 100:
            return releases
        page += 1


def _download_json(asset, token):
    response = requests.get(asset['url'], headers={'Authorization': f'Bearer {token}', 'Accept': 'application/octet-stream'}, timeout=120)
    response.raise_for_status()
    return response.json()


def fetch_published_metadata(repo, token):
    '''
    metadata.json of the newest release that has one: the "latest" release first, then the others
    newest first (a release just created for a new tag has no metadata.json yet).
    Returns [] when nothing is published.
    '''
    releases = _all_releases(repo, token)
    try:
        latest = requests.get(f'{API}/repos/{repo}/releases/latest', headers=_headers(token), timeout=60).json()
    except requests.RequestException:
        latest = None
    ordered = ([latest] if latest and latest.get('id') else []) + sorted(
        (release for release in releases if not latest or release['id'] != latest.get('id')),
        key=lambda release: release.get('published_at') or release.get('created_at') or '', reverse=True)
    for release in ordered:
        asset = next((item for item in release.get('assets', []) if item['name'] == 'metadata.json'), None)
        if not asset:
            continue
        try:
            metadata = _download_json(asset, token)
        except (requests.RequestException, ValueError) as error:
            print(f'\033[93mCould not read metadata.json of {release.get("name")}: {error}\033[0m')
            continue
        if isinstance(metadata, list):
            print(f'\033[94mPublished metadata.json: {release.get("name")} ({release.get("tag_name")})\033[0m')
            return metadata
    print('\033[93mNo published metadata.json found. Every package will be packed.\033[0m')
    return []


def find_published(metadata, name):
    return next((item for item in metadata or [] if item.get('name') == name), None)


def is_unchanged(published, content_hash):
    ''' Same content as the published package, and the published entry says where it is uploaded. '''
    return bool(published) and published.get('hash') == content_hash and bool(published.get('release_tag'))


def split_release_names(releases_to_update):
    return {name.strip() for name in str(releases_to_update or '').split('|') if name.strip()}


# # # # # # # # # #
# Content hash of a package without assembling it
# # # # # # # # # #

_file_hash_cache = {}


def _hash_file(path):
    ''' MD5 of a source file, cached: shared folders (common, std_library, ...) are read once per run '''
    key = os.path.realpath(path)
    if key not in _file_hash_cache:
        digest = hashlib.md5()
        with open(key, 'rb') as file:
            for chunk in iter(lambda: file.read(1024 * 1024), b''):
                digest.update(chunk)
        _file_hash_cache[key] = digest.hexdigest()
    return _file_hash_cache[key]


class _VirtualPackage:
    '''
    Stands in for shutil.copy / shutil.copytree / os.makedirs while a package is "assembled": nothing
    is written, every destination file is mapped to its source file instead (last copy wins, as on disk).
    '''
    def __init__(self):
        self.files = {}     # destination path -> source path
        self.dirs = set()   # destination directories that would exist

    def _add_dir(self, path):
        path = os.path.normpath(path)
        while path and path not in self.dirs and path != os.path.dirname(path):
            self.dirs.add(path)
            path = os.path.dirname(path)

    def makedirs(self, name, mode=0o777, exist_ok=False):
        self._add_dir(name)

    def copy(self, src, dst, *, follow_symlinks=True):
        if not os.path.isfile(src):
            raise FileNotFoundError(f'No such file: {src}')
        dst = os.path.normpath(dst)
        if dst in self.dirs or os.path.isdir(dst):
            dst = os.path.join(dst, os.path.basename(src))
        self.files[dst] = src
        self._add_dir(os.path.dirname(dst))
        return dst

    def copytree(self, src, dst, *args, **kwargs):
        if not os.path.isdir(src):
            raise FileNotFoundError(f'No such directory: {src}')
        dst = os.path.normpath(dst)
        self._add_dir(dst)
        for root, _, files in os.walk(src, followlinks=True):
            target = os.path.normpath(os.path.join(dst, os.path.relpath(root, src)))
            self._add_dir(target)
            for name in files:
                self.files[os.path.join(target, name)] = os.path.join(root, name)
        return dst

    def content_hash(self, base_dir):
        '''
        Same value hash_directory_contents(base_dir) returns for the assembled package: os.walk order
        (a folder's files sorted, then its sub-folders sorted), MD5 of the joined file MD5s.
        '''
        base_dir = os.path.normpath(base_dir)
        tree = {}
        for dst, src in self.files.items():
            relative = os.path.relpath(dst, base_dir)
            if relative.startswith('..'):
                continue
            node = tree
            *folders, filename = relative.split(os.sep)
            for folder in folders:
                node = node.setdefault(folder, {})
            node[filename] = src

        hashes = []
        def walk(node):
            hashes.extend(_hash_file(node[name]) for name in sorted(n for n in node if isinstance(node[n], str)))
            for name in sorted(n for n in node if isinstance(node[n], dict)):
                walk(node[name])
        walk(tree)
        return hashlib.md5(''.join(hashes).encode()).hexdigest()


@contextlib.contextmanager
def _virtual_copies():
    virtual = _VirtualPackage()
    originals = (shutil.copy, shutil.copytree, os.makedirs)
    shutil.copy, shutil.copytree, os.makedirs = virtual.copy, virtual.copytree, virtual.makedirs
    try:
        yield virtual
    finally:
        shutil.copy, shutil.copytree, os.makedirs = originals


def virtual_package_hash(assemble, base_output_dir):
    '''
    Content hash of the package assemble() would build in base_output_dir, computed from the source
    files without copying anything. assemble must only use shutil.copy / shutil.copytree / os.makedirs.
    '''
    with _virtual_copies() as virtual:
        assemble()
    return virtual.content_hash(base_output_dir)
