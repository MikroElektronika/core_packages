'''
Post message.md to a Mattermost incoming webhook (MATTERMOST_WEBHOOK_URL). No message.md (nothing
was packed or indexed) means no post.

Long messages are posted as several consecutive posts: one huge payload (e.g. ~1400 packages
indexed to two indexes) is cut off by Mattermost and rejected with
"web.incoming_webhook.decode.app_error".

  MATTERMOST_WEBHOOK_URL=... python scripts/post_mattermost_message.py [message.md]
'''

import json
import os
import subprocess
import sys
from pathlib import Path

# Characters per post: below Mattermost's post limit (16383) with room for the "(part x/y)" line
MAX_POST_CHARS = 15000


def split_message(text, limit=MAX_POST_CHARS):
    ''' Split text into chunks of at most limit characters, on line boundaries where possible. '''
    chunks, current = [], ''
    for line in text.splitlines(keepends=True):
        while len(line) > limit:  # a single line longer than a post
            if current:
                chunks.append(current)
                current = ''
            chunks.append(line[:limit])
            line = line[limit:]
        if len(current) + len(line) > limit:
            chunks.append(current)
            current = ''
        current += line
    if current.strip():
        chunks.append(current)
    return chunks


def post(url, text, payload_path):
    ''' Post one message, returns True on success. '''
    payload_path.write_text(json.dumps({'text': text}), encoding='utf-8')
    # --fail-with-body: non-2xx fails the step and shows Mattermost's reason
    result = subprocess.run(
        ['curl', '-sS', '--fail-with-body', '-X', 'POST',
         '-H', 'Content-Type: application/json',
         '--data-binary', f'@{payload_path}',
         '-w', '\nHTTP %{http_code}\n',
         url],
        capture_output=True, text=True
    )
    print(result.stdout.strip())
    if result.returncode != 0:
        print(result.stderr.strip())
        print(f'Payload size: {payload_path.stat().st_size} bytes')
        return False
    return True


def main():
    message_path = Path(sys.argv[1] if len(sys.argv) > 1 else 'message.md')
    if not message_path.is_file():
        print(f'{message_path} does not exist. Skipping Mattermost notification.')
        return
    url = os.environ.get('MATTERMOST_WEBHOOK_URL', '').strip()
    if not url:
        print('MATTERMOST_WEBHOOK_URL is not set. Skipping Mattermost notification.')
        return

    chunks = split_message(message_path.read_text(encoding='utf-8'))
    if not chunks:
        print(f'{message_path} is empty. Skipping Mattermost notification.')
        return
    print(f'Posting {message_path} as {len(chunks)} message(s).')

    payload_path = message_path.with_name('mattermost_payload.json')
    failed = 0
    for i, chunk in enumerate(chunks, 1):
        if len(chunks) > 1:
            chunk = f'{chunk.rstrip()}\n\n_(part {i}/{len(chunks)})_'
        if not post(url, chunk, payload_path):
            failed += 1

    if failed:
        sys.exit(f'Mattermost notification failed for {failed} of {len(chunks)} message(s).')
    print('Mattermost notified.')


if __name__ == '__main__':
    main()
