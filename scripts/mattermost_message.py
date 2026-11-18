'''
message.md for the MATTERMOST_CORE_PACKAGES_INFO webhook (same layout as general_packages).

Every script that indexes (or plans indexing) adds its lines with add_section(); the workflow posts
message.md at the end of the job when it exists, so a run that changed nothing stays silent.
'''

import os
from pathlib import Path

MESSAGE_FILE = Path('message.md')
REPO_URL = 'https://github.com/MikroElektronika/core_packages'


def index_label(index_name):
    ''' "Live" / "Test" for the ES index names in the environment, else the name itself. '''
    labels = {
        os.environ.get('ES_INDEX_LIVE'): 'Live',
        os.environ.get('ES_INDEX_TEST'): 'Test',
        os.environ.get('ES_INDEX_EXPERIMENTAL'): 'Experimental',
    }
    return labels.get(index_name) or index_name


def _header(dry_run, release_tag):
    release = f'[{release_tag}]({REPO_URL}/releases/tag/{release_tag})' if release_tag else 'the latest release'
    if dry_run:
        return [
            '### Core packages indexing info',
            '',
            f'There are packages in {release} that will be indexed with the next indexing workflow trigger.',
            '',
            f'If you want to index mentioned packages, please use [Indexing workflow]({REPO_URL}/actions/workflows/index.yaml).',
            '',
        ]
    return ['### Core packages indexed', '', f'Packages from {release} were indexed.', '']


def entry_line(status, display_name, previous_version=None, version=None):
    ''' "- **NEW** name" / "- **UPDATE** name (1.0.3 → 1.0.4)" '''
    versions = f' ({previous_version} → {version})' if previous_version and version and previous_version != version else ''
    return f'- **{status}** {display_name}{versions}'


def add_section(title, lines, dry_run=False, release_tag=None):
    ''' Append "# title" and its lines to message.md (written with its header on first use). '''
    if not lines:
        return
    text = MESSAGE_FILE.read_text(encoding='utf-8') if MESSAGE_FILE.exists() else '\n'.join(_header(dry_run, release_tag))
    text = text.rstrip('\n') + '\n\n' + f'# {title}\n' + '\n'.join(lines) + '\n'
    MESSAGE_FILE.write_text(text, encoding='utf-8')
