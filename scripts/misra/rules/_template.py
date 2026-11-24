"""
Template for a rule module. Copy to rule_<major>_<minor>.py and fill in.
Files starting with '_' are ignored by the loader.
"""

import os
from . import Finding

RULES = ['X.Y']
TITLE = 'Short rule title'
APPROACH = 'fix'            # 'fix' or 'deviate'
BRANCH = 'misra/rule-X.Y-short-name'


def fix(root, findings):
    """ Remove the findings for this rule. Return the number of edits made. """
    edits = 0
    by_file = {}
    for f in findings:
        by_file.setdefault(f.file, set()).add(f.line)
    for rel, lines in sorted(by_file.items()):
        path = os.path.join(root, rel)
        with open(path, newline='') as fh:          # newline='' keeps CRLF files as CRLF
            text = fh.read().splitlines(keepends=True)
        for n in sorted(lines):
            old = text[n - 1]
            new = old                               # <- transform the line here
            if new != old:
                text[n - 1] = new
                edits += 1
        with open(path, 'w', newline='') as fh:
            fh.write(''.join(text))
    return edits


# Optional. Delete if the rule can only be found by cppcheck.
def quick_check(root, files):
    """ Return a list of Finding for this rule, without cppcheck. """
    return []
