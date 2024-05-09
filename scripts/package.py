import os
import shutil
import re

def find_cmake_files(directory):
    """ Return a list of .cmake files in the directory ending with _package_x.cmake where x is a number """
    cmake_files = []
    file_pattern = re.compile(r'_package_\d+\.cmake$')  # Regular expression to match file names
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file_pattern.search(file):  # Check if the file matches the pattern
                cmake_files.append(os.path.join(root, file))
    return cmake_files

def parse_files_for_paths(cmake_files, source_dir):
    """ Parse cmake files to extract paths, directory contents, and regex for folder names inside if blocks relative to the source_directory """
    path_pattern = re.compile(r'set\((\w+)\s+"([^"]+)"\)')
    regex_pattern = re.compile(r'if.*MATCHES\s+"([^"]+)"')  # Regex to capture MATCHES condition
    paths = {}
    for file in cmake_files:
        file_name = os.path.splitext(os.path.basename(file))[0]  # Use filename without extension
        paths[file_name] = {'files': set(), 'regex': None, 'cmake_file_path' : file}  # Initialize a set for paths and a regex entry per cmake file
        inside_if = False
        with open(file, 'r') as f:
            current_regex = None
            for line in f:
                if 'if(' in line and '${MCU_NAME} MATCHES' in line:
                    regex_match = regex_pattern.search(line)
                    if regex_match:
                        current_regex = regex_match.group(1)  # Capture the regex when it appears
                    inside_if = True
                elif inside_if and line.strip() == 'endif()':
                    inside_if = False
                    if current_regex:
                        paths[file_name]['regex'] = current_regex  # Save the regex before resetting
                        current_regex = None
                elif inside_if:
                    matches = path_pattern.search(line)
                    if matches:
                        key, value = matches.groups()
                        full_path = os.path.join(source_dir, value)
                        if key == "SYSTEM_LIB_INCLUDE_DIR" and value:
                            if os.path.isdir(full_path):
                                for root, dirs, files in os.walk(full_path):
                                    for file in files:
                                        paths[file_name]['files'].add(os.path.join(root, file))
                            continue
                        paths[file_name]['files'].add(full_path)
    return paths

def copy_files(files, output_dir, source_dir):
    """ Copy individual files from source_paths to output_dir keeping the folder structure """
    for full_source_path in files:
        if os.path.exists(full_source_path):
            relative_path = os.path.relpath(full_source_path, start=source_dir)
            full_dest_path = os.path.join(output_dir, relative_path)
            os.makedirs(os.path.dirname(full_dest_path), exist_ok=True)
            shutil.copy(full_source_path, full_dest_path)
        else:
            print(f"File not found: {full_source_path}")

def copy_matched_directories(regex, directory, output_dir, base_path):
    """ Copy directories matching regex from directory to output_dir under base_path """
    if regex:
        regex_pattern = re.compile(regex, re.IGNORECASE)
        for dir_name in os.listdir(directory):
            if regex_pattern.match(dir_name):
                full_path = os.path.join(directory, dir_name)
                dest_path = os.path.join(output_dir, base_path, dir_name)
                if os.path.exists(full_path):
                    shutil.copytree(full_path, dest_path)

def copy_interrupt_files(source_dir, output_dir):
    """ Copy specific interrupt files that should be included in every package """
    # Copy interrupts.h to interrupts/include
    source_file_h = os.path.join(source_dir, 'interrupts/include/interrupts.h')
    dest_dir_h = os.path.join(output_dir, 'interrupts/include')
    os.makedirs(dest_dir_h, exist_ok=True)
    shutil.copy(source_file_h, dest_dir_h)

    # Copy interrupts.c to interrupts
    source_file_c = os.path.join(source_dir, 'interrupts/interrupts.c')
    dest_dir_c = os.path.join(output_dir, 'interrupts')
    os.makedirs(dest_dir_c, exist_ok=True)
    shutil.copy(source_file_c, dest_dir_c)

def copy_files_from_def(source_dir, output_dir, regex):
    """ Copy files from source_dir/def that match a regex to output_dir/def maintaining the folder structure """
    def_dir = os.path.join(source_dir, 'def')
    output_def_dir = os.path.join(output_dir, 'def')
    regex_pattern = re.compile(regex, re.IGNORECASE)

    for root, dirs, files in os.walk(def_dir):
        for file in files:
            if regex_pattern.match(file):
                full_source_path = os.path.join(root, file)
                relative_path = os.path.relpath(full_source_path, start=def_dir)
                full_dest_path = os.path.join(output_def_dir, relative_path)
                os.makedirs(os.path.dirname(full_dest_path), exist_ok=True)
                shutil.copy(full_source_path, full_dest_path)

def copy_cmake_files(cmake_file, source_dir, output_dir):
    """ Copy the .cmake file to the output directory maintaining the same folder structure """
    relative_path = os.path.relpath(cmake_file, start=source_dir)
    destination_path = os.path.join(output_dir, relative_path)
    os.makedirs(os.path.dirname(destination_path), exist_ok=True)
    shutil.copy(cmake_file, destination_path)
    shutil.copy(os.path.join(source_dir, "cmake/coreUtils.cmake"), os.path.join(output_dir, "cmake"))
    shutil.copy(os.path.join(source_dir, "cmake/mikroeExportConfig.cmake.in"), os.path.join(output_dir, "cmake"))


def main(source_dir, output_dir):
    cmake_files = find_cmake_files(source_dir)
    file_paths = parse_files_for_paths(cmake_files, source_dir)
    for cmake_file, data in file_paths.items():
        base_output_dir = os.path.join(output_dir, cmake_file)  # Subdirectory for this .cmake file
        # Copy the .cmake file into the package directory
        copy_cmake_files(data['cmake_file_path'], source_dir, base_output_dir)
        # Copy individual files
        copy_files(data['files'], base_output_dir, source_dir)
        # Copy schema directories
        schemas_dir = os.path.join(source_dir, 'schemas')
        copy_matched_directories(data['regex'], schemas_dir, base_output_dir, "schemas")
        # Copy interrupts directories and files
        interrupts_dir = os.path.join(source_dir, 'interrupts', 'include', 'interrupts_mcu')
        copy_matched_directories(data['regex'], interrupts_dir, os.path.join(base_output_dir, "interrupts/include"), "interrupts_mcu")
        copy_interrupt_files(source_dir, base_output_dir)  # Copy specific interrupt files
            # After handling all cmake specific tasks, perform the def file copying
        copy_files_from_def(source_dir, base_output_dir, data['regex'])
        #copy std_library to every package
        shutil.copytree(os.path.join(source_dir, 'std_library'), os.path.join(base_output_dir, "std_library"))
        #copy common to every package
        shutil.copytree(os.path.join(source_dir, 'common'), os.path.join(base_output_dir, "common"))
        #copy base CMakeLists.txt to every package
        shutil.copy(os.path.join(source_dir, "CMakeLists.txt"), base_output_dir)

# Usage
source_directory = '/home/software/GIT/core_packages/ARM/mikroC'
output_directory = '/home/software/test_dir'
main(source_directory, output_directory)
