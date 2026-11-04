'''
What is already published, so the packaging scripts pack and upload only the packages that changed.

metadata.json (uploaded to the general "Release vX.Y.Z" release) lists every MCU package with its
content hash and the release it lives in ("release_tag"). A package whose freshly assembled content
hashes the same as its published entry is not compressed or uploaded again: its published entry is
carried over to the new metadata.json, so it keeps its release, download link and version.
'''

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
