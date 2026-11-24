"""
One module per MISRA rule (or cppcheck check) that this repository has worked on.

File name: rule_<major>_<minor>.py for MISRA rules (rule_21_1.py), cppcheck_<id>.py for
cppcheck's own checks (cppcheck_bugs.py groups the real-bug checks). Copy _template.py to start.

Every module defines:
    RULES     list of ids as they appear in the CSV "rule" column ('21.1', 'uninitvar', ...)
    TITLE     one line
    APPROACH  'fix' (code changed by script or by hand) or 'deviate' (recorded deviation)
    BRANCH    branch the work was done on, for the record

and may define:
    fix(root, findings) -> int
        Edit files to remove the findings (list of Finding). Return number of edits.
        Used once on the rule branch, and again later on branches that were cut before it.
    quick_check(root, files) -> list[Finding]
        Fast check without cppcheck (regex/text based) over the given files.
        The gate runs it on every scanned file for enforced rules, so keep it cheap.
"""

import csv, importlib, os, pkgutil
from collections import namedtuple

Finding = namedtuple('Finding', 'rule severity file line message')

def load_csv(*paths):
    """ Read one or more CSVs written by misra_check.py; missing files are skipped. """
    out = []
    for path in paths:
        if not path or not os.path.isfile(path):
            continue
        with open(path, newline='') as f:
            for row in csv.DictReader(f):
                out.append(Finding(row['rule'], row['severity'], row['file'].replace(os.sep, '/'),
                                   int(row['line']), row['message']))
    return out

def all_modules():
    """ {rule id: module} for every rule module in this package. """
    found = {}
    for info in pkgutil.iter_modules(__path__):
        if info.name.startswith('_'):
            continue
        module = importlib.import_module(f'{__name__}.{info.name}')
        for rule in getattr(module, 'RULES', []):
            found[rule] = module
    return found

def read_list_file(path):
    """ Non-empty, non-comment lines of a text file (first token of each line). """
    items = []
    if path and os.path.isfile(path):
        with open(path) as f:
            for line in f:
                line = line.split('#', 1)[0].strip()
                if line:
                    items.append(line.split()[0])
    return items
