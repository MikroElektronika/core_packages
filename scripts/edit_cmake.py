import os
import re
import argparse

def main(cmake_name, regex):
    original_working_dir = os.getcwd()
    print(f"Original working directory: {original_working_dir}")

    cmakeContent = open(os.path.join(original_working_dir, 'automatization', cmake_name), mode='r', encoding='utf-8').read()
    cmakeLines = cmakeContent.split('\n')
    newContent = ''
    for line in cmakeLines:
        if not re.search('MATCHES\s*\"[^\"]*\"', line):
            newContent += line + '\n'
        else:
            newRegex = '|'.join([f'^{expression}$' for expression in regex.split('|')])
            newContent += re.sub('MATCHES\s*\"[^\"]*\"', f'MATCHES "{newRegex}"', line) + '\n'

    with open(os.path.join(original_working_dir, 'automatization', cmake_name),'w') as cmakeFile:
        cmakeFile.write(newContent)
        cmakeFile.close()

    cmakeDelaysContent = open(os.path.join(original_working_dir, 'automatization', 'delays', cmake_name), mode='r', encoding='utf-8').read()
    cmakeLines = cmakeDelaysContent.split('\n')
    newContent = ''
    for line in cmakeLines:
        if not re.search('MATCHES\s*\"[^\"]*\"', line):
            newContent += line + '\n'
        else:
            newRegex = '|'.join([f'^{expression}$' for expression in regex.split('|')])
            newContent += re.sub('MATCHES\s*\"[^\"]*\"', f'MATCHES "{newRegex}"', line) + '\n'

    with open(os.path.join(original_working_dir, 'automatization', 'delays', cmake_name),'w') as cmakeDelaysFile:
        cmakeDelaysFile.write(newContent)
        cmakeDelaysFile.close()

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Edit cmake file regular expression for MCUs.")
    parser.add_argument("--cmake_name", help="Name of the cmake files to be edited", required=False)
    parser.add_argument("--cmake_regex", help="New MCU regex to write to cmake", required=False)
    args = parser.parse_args()
    main(args.cmake_name, args.cmake_regex)
