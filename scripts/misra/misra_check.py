#!/usr/bin/env python3
"""
Report MISRA C:2012 violations for a source tree (mikroSDK, core_packages, ...).

Uses the open source cppcheck MISRA addon. If cppcheck is not installed,
it is downloaded and built once into ~/.cache/misra_check/.

Note: the free addon covers most, but not all, MISRA C:2012 rules.
Results are a strong indication, not a formal compliance proof.

Outputs (in -o folder):
    violations.csv            MISRA findings            (rule, severity, file, line, message)
    cppcheck_findings.csv     cppcheck's own bug checks (same columns, rule = cppcheck id)
    incomplete_analysis.csv   misra-config messages (unknown macros/types)
    summary.md, cppcheck.xml

Examples:
    python3 scripts/misra/misra_check.py . -o misra_report
    python3 scripts/misra/misra_check.py . -o misra_report --exclude-file .github/misra/exclude.txt \
        --define-file .github/misra/defines.txt --suppressions-file .github/misra/suppressions.txt
    python3 scripts/misra/misra_check.py . --only ARM/gcc_clang/delays     # just some folders
    python3 scripts/misra/misra_check.py . --project build/compile_commands.json   # exact flags of a real build

Exclude file format (one entry per line, '#' starts a comment):
    thirdparty/                         # path prefix, relative to the repository root
    middleware/filesystem/fat/FatFs/
    tests/lvgl/                         # any folder or file below this path is skipped
    FatFs                               # a bare name (no '/') skips every folder with that name
"""

import argparse, csv, json, os, re, shutil, subprocess, sys, tarfile, tempfile, urllib.request
import xml.etree.ElementTree as ET
from collections import Counter, defaultdict
from concurrent.futures import ThreadPoolExecutor, as_completed

CPPCHECK_VERSION = '2.16.0'
CACHE_DIR = os.path.join(os.path.expanduser('~'), '.cache', 'misra_check')
CPPCHECK_PREFIX = os.path.join(CACHE_DIR, f'cppcheck-{CPPCHECK_VERSION}')

SOURCE_EXTENSIONS = ('.c',)
DEFAULT_SKIP_DIRS = {'.git', '.venv', 'build', 'output', 'install', '__pycache__'}
INCLUDE_RE = re.compile(r'^\s*#\s*include\s*[<"]([^>"]+)[>"]', re.MULTILINE)
# Standard headers come from cppcheck's own library config, never from copies in the tree.
STANDARD_HEADERS = {
    'assert.h', 'complex.h', 'ctype.h', 'errno.h', 'fenv.h', 'float.h', 'inttypes.h', 'iso646.h',
    'limits.h', 'locale.h', 'math.h', 'setjmp.h', 'signal.h', 'stdalign.h', 'stdarg.h', 'stdatomic.h',
    'stdbool.h', 'stddef.h', 'stdint.h', 'stdio.h', 'stdlib.h', 'stdnoreturn.h', 'string.h', 'tgmath.h',
    'threads.h', 'time.h', 'uchar.h', 'wchar.h', 'wctype.h'
}
# cppcheck ids that describe the analysis itself, not the code. Never written to cppcheck_findings.csv.
CPPCHECK_NOISE_IDS = {
    'missingInclude', 'missingIncludeSystem', 'checkersReport', 'unmatchedSuppression',
    'normalCheckLevelMaxBranches', 'toomanyconfigs', 'noValidConfiguration', 'internalAstError',
    'unknownMacro', 'preprocessorErrorDirective', 'ctuOneDefinitionRuleViolation',
}
CSV_HEADER = ['rule', 'severity', 'file', 'line', 'message']
# cppcheck treats ANY stderr output of the addon as a failure and then drops all findings of that file.
# Newer Python versions print DeprecationWarnings from misra.py, so warnings are switched off for it.
CPPCHECK_ENV = dict(os.environ, PYTHONWARNINGS='ignore')

def write_rule_id_texts(path):
    """
    Write a minimal --rule-texts file that gives every rule a distinct message ("MISRA C:2012 Rule X.Y").

    Without rule texts the addon reports every rule as the same message "misra violation (use --rule-texts...)",
    and cppcheck drops errors with identical location + message: only ONE MISRA rule per line was reported.
    This file holds rule numbers only, no text from the MISRA document.
    """
    lines = ['Appendix A Summary of guidelines', '']
    for major in range(1, 24):
        for minor in range(1, 21):
            lines += [f'Rule {major}.{minor}', f'MISRA C:2012 Rule {major}.{minor}', '']
    lines.append('Appendix B')
    with open(path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    return path

def find_cppcheck():
    """ Return path to a cppcheck binary that has the MISRA addon, building one if needed. """
    local = os.path.join(CPPCHECK_PREFIX, 'bin', 'cppcheck')
    if os.path.isfile(local):
        return local
    system = shutil.which('cppcheck')
    if system:
        return system
    return build_cppcheck()

def build_cppcheck():
    print(f'cppcheck not found, building {CPPCHECK_VERSION} into {CPPCHECK_PREFIX} (one time, a few minutes)...')
    os.makedirs(CACHE_DIR, exist_ok=True)
    archive = os.path.join(CACHE_DIR, f'cppcheck-{CPPCHECK_VERSION}.tar.gz')
    if not os.path.isfile(archive):
        url = f'https://github.com/danmar/cppcheck/archive/refs/tags/{CPPCHECK_VERSION}.tar.gz'
        urllib.request.urlretrieve(url, archive)
    src = os.path.join(CACHE_DIR, f'cppcheck-{CPPCHECK_VERSION}-src')
    if not os.path.isdir(src):
        with tarfile.open(archive) as tar:
            tar.extractall(CACHE_DIR, filter='data')
        os.rename(os.path.join(CACHE_DIR, f'cppcheck-{CPPCHECK_VERSION}'), src)
    build = os.path.join(src, 'build')
    subprocess.run(['cmake', '-S', src, '-B', build, '-DCMAKE_BUILD_TYPE=Release',
                    f'-DCMAKE_INSTALL_PREFIX={CPPCHECK_PREFIX}',
                    f'-DFILESDIR={CPPCHECK_PREFIX}/share/cppcheck'], check=True)
    subprocess.run(['cmake', '--build', build, '-j', str(os.cpu_count() or 4)], check=True)
    subprocess.run(['cmake', '--install', build], check=True)
    return os.path.join(CPPCHECK_PREFIX, 'bin', 'cppcheck')

def read_exclude_file(path):
    """ Return the non-empty, non-comment lines of an exclude file. """
    entries = []
    with open(path) as f:
        for line in f:
            line = line.split('#', 1)[0].strip()
            if line:
                entries.append(line.replace('\\', '/'))
    return entries

def changed_sources(root, ref, files):
    """
    Subset of files affected by changes since ref: changed .c files, plus .c files that
    #include a changed header (by file name). Used to keep pull-request runs fast.
    """
    out = subprocess.run(['git', 'diff', '--name-only', f'{ref}...HEAD', '--', '*.c', '*.h'],
                         cwd=root, capture_output=True, text=True, check=True).stdout.split()
    changed = {os.path.normpath(os.path.join(root, p)) for p in out}
    headers = {os.path.basename(p) for p in changed if p.endswith('.h')}
    selected = []
    for f in files:
        if os.path.normpath(f) in changed:
            selected.append(f)
        elif headers:
            try:
                with open(f, errors='ignore') as fh:
                    names = {os.path.basename(n) for n in INCLUDE_RE.findall(fh.read())}
            except OSError:
                continue
            if names & headers:
                selected.append(f)
    return selected

def collect_sources(root, only, exclude):
    """
    All .c files under root (or under root/<only...>).
    exclude entries without '/' are folder names skipped anywhere in the tree;
    entries with '/' are path prefixes relative to root (folders or single files).
    """
    names = DEFAULT_SKIP_DIRS | {e for e in exclude if '/' not in e.strip('/')}
    prefixes = tuple(e.strip('/') + ('' if e.endswith(SOURCE_EXTENSIONS) else '/')
                     for e in exclude if '/' in e.strip('/'))
    def excluded(path):
        rel = os.path.relpath(path, root).replace(os.sep, '/')
        return bool(prefixes) and (rel + '/').startswith(prefixes)
    starts = [os.path.join(root, o) for o in only] if only else [root]
    files = []
    for start in starts:
        for dirpath, dirnames, filenames in os.walk(start):
            dirnames[:] = [d for d in dirnames if d not in names and not excluded(os.path.join(dirpath, d))]
            files.extend(os.path.join(dirpath, f) for f in filenames
                         if f.endswith(SOURCE_EXTENSIONS) and not excluded(os.path.join(dirpath, f)))
    return sorted(files)

def build_header_index(root):
    """ Map header file name -> list of directories containing it (whole tree, incl. thirdparty). """
    index = defaultdict(list)
    for dirpath, dirnames, filenames in os.walk(root):
        dirnames[:] = [d for d in dirnames if d not in ('.git', '.venv', '__pycache__')]
        for f in filenames:
            if f.endswith(('.h', '.hpp')):
                index[f].append(dirpath)
    return index

def closeness(a, b):
    """ Number of leading path components two paths share. """
    return len(os.path.commonpath([a, b]).split(os.sep))

def resolve_include_dirs(source, header_index, prefer, max_headers=400):
    """
    Follow #include lines from source and return the include directories needed,
    picking for each header the copy closest to the source file in the tree.
    Ties (e.g. the same header for many MCU families) go to paths containing a `prefer` entry.
    """
    def score(d):
        lower = d.lower()
        return (closeness(d, source), [p.lower() in lower for p in prefer])

    dirs, seen, queue = [], set(), [source]
    while queue and len(seen) < max_headers:
        current = queue.pop()
        try:
            with open(current, errors='ignore') as f:
                names = INCLUDE_RE.findall(f.read())
        except OSError:
            continue
        for name in names:
            if name in STANDARD_HEADERS:
                continue
            candidates = [d for d in header_index.get(os.path.basename(name), [])
                          if os.path.join(d, os.path.basename(name)).endswith(os.path.normpath(name))]
            if not candidates:
                continue
            best = max(candidates, key=score)
            header = os.path.join(best, os.path.basename(name))
            if header in seen:
                continue
            seen.add(header)
            queue.append(header)
            # For "a/b.h" the include directory is the folder above "a".
            include_dir = os.path.normpath(header[:-len(os.path.normpath(name))]) if os.sep in os.path.normpath(name) else best
            if include_dir not in dirs:
                dirs.append(include_dir)
    return dirs

def check_file(cppcheck, root, source, include_dirs, addon_file, xml_file, defines=(), suppressions=None):
    # MISRA findings have "style" severity and are hidden unless style is enabled.
    cmd = [cppcheck, f'--addon={addon_file}', '--enable=style', '--std=c99', '--max-configs=1', '--inline-suppr',
           '--suppress=missingInclude', '--suppress=missingIncludeSystem', '--quiet',
           '--xml', f'--output-file={xml_file}']
    cmd += [f'-D{d}' for d in defines]
    if suppressions:
        cmd.append(f'--suppressions-list={suppressions}')
    cmd += [f'-I{d}' for d in include_dirs]
    cmd.append(os.path.abspath(source))
    # Every cppcheck process gets its own working directory: the MISRA addon writes a
    # "cppcheck-addon-ctu-file-list" file into the cwd, and parallel runs would overwrite it.
    with tempfile.TemporaryDirectory(prefix='misra_') as cwd:
        subprocess.run(cmd, cwd=cwd, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, env=CPPCHECK_ENV)
    return xml_file

def run_project(cppcheck, compile_commands, out_dir, jobs, rule_texts, defines, suppressions=None):
    """ Analyse exactly the files and flags recorded in a compile_commands.json of a real build. """
    addon = {'script': 'misra.py', 'args': []}
    if rule_texts:
        addon['args'].append(f'--rule-texts={os.path.abspath(rule_texts)}')
    addon_file = os.path.join(out_dir, 'misra.json')
    with open(addon_file, 'w') as f:
        json.dump(addon, f)
    xml_file = os.path.join(out_dir, 'cppcheck.xml')
    cmd = [cppcheck, f'--project={os.path.abspath(compile_commands)}', f'--addon={addon_file}', '--enable=style',
           '--inline-suppr', '--suppress=missingIncludeSystem', '--quiet', f'-j{jobs}', '--xml',
           f'--output-file={xml_file}'] + [f'-D{d}' for d in defines]
    if suppressions:
        cmd.append(f'--suppressions-list={suppressions}')
    print(f'Analysing files listed in {compile_commands}...')
    with tempfile.TemporaryDirectory(prefix='misra_') as cwd:
        subprocess.run(cmd, cwd=cwd, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, env=CPPCHECK_ENV)
    return xml_file

def run_cppcheck(cppcheck, root, files, out_dir, jobs, rule_texts, prefer, defines=(), suppressions=None):
    addon = {'script': 'misra.py', 'args': []}
    if rule_texts:
        addon['args'].append(f'--rule-texts={os.path.abspath(rule_texts)}')
    addon_file = os.path.join(out_dir, 'misra.json')
    with open(addon_file, 'w') as f:
        json.dump(addon, f)

    print('Indexing headers...')
    header_index = build_header_index(root)

    xml_dir = os.path.join(out_dir, 'xml')
    os.makedirs(xml_dir, exist_ok=True)
    print(f'Analysing {len(files)} files with {jobs} jobs...')
    results = []
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        futures = {}
        for i, source in enumerate(files):
            xml_file = os.path.join(xml_dir, f'{i}.xml')
            futures[pool.submit(check_file, cppcheck, root, source,
                                       resolve_include_dirs(source, header_index, prefer), addon_file, xml_file, defines,
                                       suppressions)] = source
        for done, future in enumerate(as_completed(futures), 1):
            results.append((futures[future], future.result()))
            if done % 50 == 0 or done == len(files):
                print(f'  {done}/{len(files)} files checked')

    # Merge per-file results into one cppcheck.xml
    merged = ET.Element('results', version='2')
    errors = ET.SubElement(merged, 'errors')
    for source, xml_file in results:
        try:
            for error in ET.parse(xml_file).getroot().iter('error'):
                errors.append(error)
        except (ET.ParseError, OSError) as exc:
            # cppcheck leaves a truncated XML when the addon fails: record it, never drop it silently
            try:
                with open(xml_file, errors='ignore') as fh:
                    detail = re.sub(r'\s+', ' ', fh.read())[-600:]
            except OSError:
                detail = str(exc)
            failure = ET.SubElement(errors, 'error', id='internalError', severity='error',
                                    msg=f'Failed to execute: analysis output unreadable ({exc}). {detail}')
            ET.SubElement(failure, 'location', file=os.path.abspath(source), line='0')
    xml_file = os.path.join(out_dir, 'cppcheck.xml')
    ET.ElementTree(merged).write(xml_file)
    shutil.rmtree(xml_dir, ignore_errors=True)
    return xml_file

def is_excluded(rel_path, exclude):
    """ True when a root-relative path falls under an exclude entry (folder name or path prefix). """
    rel = rel_path.replace(os.sep, '/')
    parts = rel.split('/')[:-1]
    for e in exclude:
        e = e.strip('/')
        if '/' in e:
            if rel == e or rel.startswith(e + '/'):
                return True
        elif e in parts:
            return True
    return False

def addon_failures(xml_file):
    """ Files where the MISRA addon itself failed: their findings are missing, so the result is not usable. """
    failed = []
    for error in ET.parse(xml_file).getroot().iter('error'):
        if error.get('id') == 'internalError' and 'Failed to execute' in error.get('msg', ''):
            location = error.find('location')
            failed.append((location.get('file') if location is not None else '?', error.get('msg', '')))
    return failed

def parse_results(xml_file, root, exclude=()):
    """
    Return (findings, config_issues, cppcheck_findings) as lists of (rule, severity, file, line, message).
    config_issues are places the checker could not fully analyse (unknown types/macros).
    cppcheck_findings are cppcheck's own checks (uninitvar, missingReturn, syntaxError, ...).
    """
    findings, config_issues, cppcheck_findings, seen = [], [], [], set()
    for error in ET.parse(xml_file).getroot().iter('error'):
        error_id = error.get('id', '')
        if not error_id.startswith('misra-'):
            if error_id in CPPCHECK_NOISE_IDS or error_id.startswith('misra'):
                continue
            location = error.find('location')
            if location is None:
                continue
            path = os.path.relpath(location.get('file'), root)
            if exclude and is_excluded(path, exclude):
                continue
            item = (error_id, error.get('severity', ''), path, int(location.get('line', 0)), error.get('msg', ''))
            if item not in seen:
                seen.add(item)
                cppcheck_findings.append(item)
            continue
        location = error.find('location')
        if location is None:
            continue
        path = os.path.relpath(location.get('file'), root)
        if exclude and is_excluded(path, exclude):
            continue  # e.g. an excluded third-party header pulled in by MikroE code
        rule = error_id.replace('misra-c2012-', '').replace('misra-config', 'config')
        item = (rule, error.get('severity', ''), path, int(location.get('line', 0)), error.get('msg', ''))
        # Headers are analysed once per including .c file, report each finding once.
        if item in seen:
            continue
        seen.add(item)
        (config_issues if rule == 'config' else findings).append(item)
    return findings, config_issues, cppcheck_findings

def write_csv(path, rows):
    with open(path, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(CSV_HEADER)
        writer.writerows(sorted(rows, key=lambda x: (x[2], x[3], x[0])))

def rule_sort_key(rule):
    parts = rule.replace('dir-', '').split('.')
    return [int(p) if p.isdigit() else 0 for p in parts]

def write_reports(findings, out_dir, depth):
    write_csv(os.path.join(out_dir, 'violations.csv'), findings)

    by_rule = Counter(f[0] for f in findings)
    by_area = Counter('/'.join(f[2].split(os.sep)[:depth]) for f in findings)
    by_file = Counter(f[2] for f in findings)
    rules_per_area = defaultdict(Counter)
    for rule, _, path, _, _ in findings:
        rules_per_area['/'.join(path.split(os.sep)[:depth])][rule] += 1

    lines = [f'# MISRA C:2012 report', '', f'Total violations: {len(findings)}',
             f'Files with violations: {len(by_file)}', '', '## Per rule', '',
             '| Rule | Count |', '| --- | --- |']
    lines += [f'| {r} | {by_rule[r]} |' for r in sorted(by_rule, key=rule_sort_key)]
    lines += ['', '## Per folder', '', '| Folder | Count | Top rules |', '| --- | --- | --- |']
    for area, count in by_area.most_common():
        top = ', '.join(f'{r} ({c})' for r, c in rules_per_area[area].most_common(5))
        lines.append(f'| {area} | {count} | {top} |')
    lines += ['', '## Top 50 files', '', '| File | Count |', '| --- | --- |']
    lines += [f'| {p} | {c} |' for p, c in by_file.most_common(50)]
    with open(os.path.join(out_dir, 'summary.md'), 'w') as f:
        f.write('\n'.join(lines) + '\n')
    return by_rule, by_area

def main():
    parser = argparse.ArgumentParser(description='Report MISRA C:2012 violations using cppcheck.')
    parser.add_argument('root', help='Repository root to analyse')
    parser.add_argument('-o', '--output', default='misra_report', help='Output folder (default: misra_report)')
    parser.add_argument('--only', nargs='*', default=[], help='Analyse only these sub-folders of root')
    parser.add_argument('--exclude', nargs='*', default=[],
                        help='Folder names (e.g. thirdparty) or root-relative paths (e.g. middleware/filesystem/fat/FatFs/) to skip')
    parser.add_argument('--exclude-file', help='Text file with one exclude entry per line (# comments allowed)')
    parser.add_argument('--define', nargs='*', default=[], metavar='NAME[=VALUE]',
                        help='Extra preprocessor defines for every file, e.g. FLATTEN_ME_LEVEL=FLATTEN_ME_LEVEL_NONE')
    parser.add_argument('--define-file', help='Text file with one NAME[=VALUE] define per line (# comments allowed)')
    parser.add_argument('--suppressions-file',
                        help='cppcheck suppressions list for approved deviations (e.g. .github/misra/suppressions.txt)')
    parser.add_argument('--changed-since', metavar='GIT_REF',
                        help='Only analyse .c files changed since GIT_REF, or including a changed header (fast PR mode)')
    parser.add_argument('--project', help='compile_commands.json of a real build: analyse exactly those files and flags')
    parser.add_argument('-j', '--jobs', type=int, default=os.cpu_count() or 4, help='Parallel jobs')
    parser.add_argument('--depth', type=int, default=2, help='Folder depth used for grouping in the summary')
    parser.add_argument('--prefer', nargs='*', default=['stm32', 'arm'],
                        help='When a header exists for several MCU families, prefer paths containing these (default: stm32 arm)')
    parser.add_argument('--rule-texts', help='Rule texts file extracted from the purchased MISRA C:2012 PDF')
    parser.add_argument('--report-only', action='store_true', help='Re-create reports from an existing cppcheck.xml')
    args = parser.parse_args()

    root = os.path.abspath(args.root)
    out_dir = os.path.abspath(args.output)
    os.makedirs(out_dir, exist_ok=True)

    exclude = list(args.exclude)
    if args.exclude_file:
        exclude += read_exclude_file(args.exclude_file)
    defines = list(args.define)
    if args.define_file:
        defines += read_exclude_file(args.define_file)
    args.define = defines
    if not args.rule_texts:
        args.rule_texts = write_rule_id_texts(os.path.join(out_dir, 'rule_ids.txt'))
    suppressions = os.path.abspath(args.suppressions_file) if args.suppressions_file else None
    xml_file = os.path.join(out_dir, 'cppcheck.xml')
    if args.project and not args.report_only:
        xml_file = run_project(find_cppcheck(), args.project, out_dir, args.jobs, args.rule_texts, args.define,
                               suppressions)
    elif not args.report_only:
        files = collect_sources(root, args.only, exclude)
        if args.changed_since:
            files = changed_sources(root, args.changed_since, files)
            print(f'{len(files)} source files affected by changes since {args.changed_since}')
            if not files:
                for name in ('violations.csv', 'cppcheck_findings.csv', 'incomplete_analysis.csv'):
                    write_csv(os.path.join(out_dir, name), [])
                print('No C sources affected - nothing to analyse.')
                return
        if not files:
            sys.exit('No .c files found.')
        print(f'{len(files)} source files ({len(exclude)} exclude entries)')
        xml_file = run_cppcheck(find_cppcheck(), root, files, out_dir, args.jobs, args.rule_texts, args.prefer, args.define,
                                suppressions)

    failed = addon_failures(xml_file)
    if failed:
        print(f'ERROR: the MISRA addon failed on {len(failed)} file(s); their findings are missing. First one:')
        print(f'  {failed[0][0]}\n  {failed[0][1][:600]}')
        sys.exit(2)
    findings, config_issues, cppcheck_findings = parse_results(xml_file, root, exclude)
    by_rule, by_area = write_reports(findings, out_dir, args.depth)
    write_csv(os.path.join(out_dir, 'incomplete_analysis.csv'), config_issues)
    write_csv(os.path.join(out_dir, 'cppcheck_findings.csv'), cppcheck_findings)

    print(f'\nTotal MISRA violations: {len(findings)}')
    print(f'Places not fully analysed (missing headers/macros): {len(config_issues)} -> incomplete_analysis.csv')
    print(f'cppcheck bug-check findings (non-MISRA): {len(cppcheck_findings)} -> cppcheck_findings.csv')
    print('Top rules:  ' + ', '.join(f'{r} ({c})' for r, c in by_rule.most_common(10)))
    print('Top folders: ' + ', '.join(f'{a} ({c})' for a, c in by_area.most_common(10)))
    print(f'\nReports in {out_dir}:\n  summary.md      per rule / folder / file\n  violations.csv  every violation (rule, file, line)')

if __name__ == '__main__':
    main()
