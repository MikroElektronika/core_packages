#!/usr/bin/env python3
"""
Per-rule tooling on top of misra_check.py reports.

    list                     rule modules in scripts/misra/rules/ and whether each is enforced
    count  REPORT            findings per rule in a report (paste before/after into the PR)
    check  RULE REPORT       print findings of one rule, exit 1 if there are any
    fix    RULE REPORT       run the rule module's fix() on the findings in REPORT
    gate   REPORT            CI: fail on any finding of a rule listed in .github/misra/enforced_rules.txt

REPORT is an output folder of misra_check.py (violations.csv + cppcheck_findings.csv).
RULE is the id used in the CSV: '21.1', '8.2', 'uninitvar', ...

Typical rule branch:
    python3 scripts/misra/misra_check.py . -o ../misra_out/before $COMMON_ARGS
    python3 scripts/misra/misra_rule.py fix 21.1 ../misra_out/before
    python3 scripts/misra/misra_check.py . -o ../misra_out/after $COMMON_ARGS
    python3 scripts/misra/misra_rule.py check 21.1 ../misra_out/after
    echo 21.1 >> .github/misra/enforced_rules.txt
"""

import argparse, os, sys
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from rules import Finding, all_modules, load_csv, read_list_file   # noqa: E402
import misra_check                                                  # noqa: E402

DEFAULT_ENFORCED = '.github/misra/enforced_rules.txt'
DEFAULT_EXCLUDE = '.github/misra/exclude.txt'


def report_findings(report):
    return load_csv(os.path.join(report, 'violations.csv'), os.path.join(report, 'cppcheck_findings.csv'))


def source_files(root, exclude):
    """ All .c and .h files under root that are not excluded (for quick_check). """
    names = misra_check.DEFAULT_SKIP_DIRS | {e.strip('/') for e in exclude if '/' not in e.strip('/')}
    out = []
    for dirpath, dirnames, filenames in os.walk(root):
        dirnames[:] = [d for d in dirnames if d not in names]
        for f in filenames:
            if f.endswith(('.c', '.h')):
                rel = os.path.relpath(os.path.join(dirpath, f), root).replace(os.sep, '/')
                if not misra_check.is_excluded(rel, exclude):
                    out.append(rel)
    return sorted(out)


def cmd_list(args):
    enforced = set(read_list_file(args.enforced))
    modules = all_modules()
    print(f'{"rule":<28} {"approach":<8} {"enforced":<8} branch / title')
    for rule in sorted(set(modules) | enforced, key=misra_check.rule_sort_key):
        m = modules.get(rule)
        print(f'{rule:<28} {getattr(m, "APPROACH", "-"):<8} {"yes" if rule in enforced else "no":<8} '
              f'{getattr(m, "BRANCH", "(no module)")}  {getattr(m, "TITLE", "")}')


def cmd_count(args):
    counts = Counter(f.rule for f in report_findings(args.report))
    for rule, n in sorted(counts.items(), key=lambda x: -x[1]):
        print(f'{n:8}  {rule}')
    print(f'{sum(counts.values()):8}  total')


def cmd_check(args):
    hits = [f for f in report_findings(args.report) if f.rule == args.rule]
    module = all_modules().get(args.rule)
    if module and hasattr(module, 'quick_check'):
        exclude = misra_check.read_exclude_file(args.exclude) if os.path.isfile(args.exclude) else []
        hits += module.quick_check(args.root, source_files(args.root, exclude))
    for f in sorted(set(hits), key=lambda f: (f.file, f.line)):
        print(f'{f.file}:{f.line}: [{f.rule}] {f.message}')
    print(f'{len(set(hits))} finding(s) for {args.rule}')
    sys.exit(1 if hits else 0)


def cmd_fix(args):
    module = all_modules().get(args.rule)
    if module is None or not hasattr(module, 'fix'):
        sys.exit(f'No fix() for {args.rule}: add scripts/misra/rules/rule_*.py (see _template.py).')
    hits = [f for f in report_findings(args.report) if f.rule == args.rule]
    if hasattr(module, 'quick_check'):
        # quick checks also see code cppcheck skips (inactive #if branches, macro arguments)
        exclude = misra_check.read_exclude_file(args.exclude) if os.path.isfile(args.exclude) else []
        hits += module.quick_check(args.root, source_files(args.root, exclude))
    hits = sorted(set(hits), key=lambda f: (f.file, f.line))
    if args.only:
        hits = [f for f in hits if f.file.startswith(tuple(args.only))]
    print(f'{len(hits)} finding(s) for {args.rule}, running {module.__name__}.fix()')
    print(f'{module.fix(args.root, hits)} edit(s) made')


def cmd_gate(args):
    enforced = read_list_file(args.enforced)
    if not enforced:
        print('No enforced rules yet (.github/misra/enforced_rules.txt is empty).')
        return
    enforced_set = set(enforced)
    hits = [f for f in report_findings(args.report) if f.rule in enforced_set]

    modules = all_modules()
    quick = {m for r, m in modules.items() if r in enforced_set and hasattr(m, 'quick_check')}
    if quick:
        exclude = misra_check.read_exclude_file(args.exclude) if os.path.isfile(args.exclude) else []
        files = source_files(args.root, exclude)
        for m in quick:
            hits += m.quick_check(args.root, files)
    hits = sorted(set(hits), key=lambda f: (f.file, f.line, f.rule))

    level = 'warning' if args.warn_only else 'error'
    for f in hits:
        print(f'::{level} file={f.file},line={f.line},title=MISRA enforced rule {f.rule}::{f.message}')

    summary = os.environ.get('GITHUB_STEP_SUMMARY')
    if summary:
        per_rule = Counter(f.rule for f in hits)
        with open(summary, 'a') as fh:
            fh.write('## MISRA enforced rules\n\n')
            fh.write(f'Enforced: {", ".join(enforced)}. Findings: **{len(hits)}**.\n\n')
            if hits:
                fh.write('| Rule | Count |\n| --- | --- |\n')
                for rule, n in per_rule.most_common():
                    fh.write(f'| {rule} | {n} |\n')

    print(f'{len(hits)} finding(s) of enforced rules ({", ".join(enforced)}).')
    if hits and not args.warn_only:
        sys.exit(1)


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('--root', default='.', help='Repository root (default: .)')
    p.add_argument('--enforced', default=DEFAULT_ENFORCED, help=f'Enforced rules file (default: {DEFAULT_ENFORCED})')
    p.add_argument('--exclude', default=DEFAULT_EXCLUDE, help=f'Exclude file for quick checks (default: {DEFAULT_EXCLUDE})')
    sub = p.add_subparsers(dest='cmd', required=True)
    sub.add_parser('list')
    s = sub.add_parser('count'); s.add_argument('report')
    s = sub.add_parser('check'); s.add_argument('rule'); s.add_argument('report')
    s = sub.add_parser('fix'); s.add_argument('rule'); s.add_argument('report')
    s.add_argument('--only', nargs='*', help='Only fix files under these path prefixes')
    s = sub.add_parser('gate'); s.add_argument('report'); s.add_argument('--warn-only', action='store_true')
    args = p.parse_args()
    args.root = os.path.abspath(args.root)
    {'list': cmd_list, 'count': cmd_count, 'check': cmd_check, 'fix': cmd_fix, 'gate': cmd_gate}[args.cmd](args)


if __name__ == '__main__':
    main()
