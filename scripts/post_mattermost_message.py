'''
Post message.md to a Mattermost incoming webhook (MATTERMOST_WEBHOOK_URL). No message.md (nothing
was packed or indexed) means no post.

  MATTERMOST_WEBHOOK_URL=... python scripts/post_mattermost_message.py [message.md]
'''

import json
import os
import subprocess
import sys
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

    payload_path = message_path.with_name('mattermost_payload.json')
    payload_path.write_text(json.dumps({'text': message_path.read_text(encoding='utf-8')}), encoding='utf-8')

    # --fail-with-body: non-2xx fails the step and shows Mattermost's reason
    result = subprocess.run(
        ['curl', '-sS', '--fail-with-body', '-X', 'POST',
         '-H', 'Content-Type: application/json',
         '--data', f'@{payload_path}',
         '-w', '\nHTTP %{http_code}\n',
         url],
        capture_output=True, text=True
    )
    print(result.stdout.strip())
    if result.returncode != 0:
        print(result.stderr.strip())
        sys.exit(f'Mattermost notification failed (curl exit code {result.returncode}).')
    print('Mattermost notified.')


if __name__ == '__main__':
    main()
