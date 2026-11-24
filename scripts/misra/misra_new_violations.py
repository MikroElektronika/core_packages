#!/usr/bin/env python3
"""
Report MISRA violations that fall on lines added or changed by a pull request.

Reads violations.csv written by scripts/misra/misra_check.py, compares it with
`git diff <base>...HEAD`, prints GitHub annotations for every violation on a
changed line, writes a table to the job summary and exits with 1 if any were found.

Examples:
    python3 scripts/misra/misra_new_violations.py misra_report/violations.csv origin/master
    python3 scripts/misra/misra_new_violations.py misra_report/violations.csv origin/master --warn-only
"""

import argparse, csv, os, re, subprocess, sys

HUNK_RE = re.compile(r'^@@ -\d+(?:,\d+)? \+(\d+)(?:,(\d+))? @@')

def changed_lines(base):
    """ Return {file: set(line numbers)} for lines added/changed in HEAD compared to base. """
    diff = subprocess.run(['git', 'diff', '-U0', '--no-color', f'{base}...HEAD', '--', '*.c', '*.h'],
                          capture_output=True, text=True, check=True).stdout
    changed, current = {}, None
    for line in diff.splitlines():
        if line.startswith('+++ '):
            path = line[4:]
            current = None if path == '/dev/null' else path[2:]  # strip "b/"
            if current:
                changed.setdefault(current, set())
        elif current and line.startswith('@@'):
            match = HUNK_RE.match(line)
            start, count = int(match.group(1)), int(match.group(2) or 1)
            changed[current].update(range(start, start + count))
    return changed

def main():
    parser = argparse.ArgumentParser(description='Fail when a PR adds MISRA violations.')
    parser.add_argument('violations', help='violations.csv from misra_check.py')
    parser.add_argument('base', help='Base ref to diff against, e.g. origin/master')
    parser.add_argument('--warn-only', action='store_true', help='Report, but do not fail the job')
    args = parser.parse_args()

    changed = changed_lines(args.base)
    new = []
    with open(args.violations, newline='') as f:
        for row in csv.DictReader(f):
            path = row['file'].replace(os.sep, '/')
            if int(row['line']) in changed.get(path, ()):
                new.append(row)

    level = 'warning' if args.warn_only else 'error'
    for row in new:
        print(f"::{level} file={row['file']},line={row['line']},title=MISRA C:2012 Rule {row['rule']}::{row['message']}")

    summary = os.environ.get('GITHUB_STEP_SUMMARY')
    if summary:
        with open(summary, 'a') as f:
            f.write('## MISRA C:2012 check\n\n')
            f.write(f'Changed C files: {len(changed)}. Violations on changed lines: **{len(new)}**.\n\n')
            if new:
                f.write('| Rule | File | Line |\n| --- | --- | --- |\n')
                for row in sorted(new, key=lambda r: (r['file'], int(r['line']))):
                    f.write(f"| {row['rule']} | `{row['file']}` | {row['line']} |\n")

    print(f'{len(new)} MISRA violation(s) on lines changed by this PR.')
    if new and not args.warn_only:
        sys.exit(1)

if __name__ == '__main__':
    main()
