'''
Post message.md to a Mattermost incoming webhook (MATTERMOST_WEBHOOK_URL). No message.md (nothing
was packed or indexed) means no post.

  MATTERMOST_WEBHOOK_URL=... python scripts/post_mattermost_message.py [message.md]
'''

import json
import os
import sys
import urllib.request
from pathlib import Path


def main():
    message_path = Path(sys.argv[1] if len(sys.argv) > 1 else 'message.md')
    if not message_path.is_file():
        print(f'{message_path} does not exist. Skipping Mattermost notification.')
        return
    url = os.environ.get('MATTERMOST_WEBHOOK_URL', '').strip()
    if not url:
        print('MATTERMOST_WEBHOOK_URL is not set. Skipping Mattermost notification.')
        return
    payload = json.dumps({'text': message_path.read_text(encoding='utf-8')}).encode('utf-8')
    request = urllib.request.Request(url, data=payload, headers={'Content-Type': 'application/json'}, method='POST')
    with urllib.request.urlopen(request, timeout=30) as response:
        print(f'Mattermost notified ({response.status}).')


if __name__ == '__main__':
    main()
