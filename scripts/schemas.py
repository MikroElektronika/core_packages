import os
import json
import zlib
import struct
import logging
from collections import defaultdict
from hashlib import md5

class GenerateSchemas:
    def __init__(self, input_directory, output_file, regexes=None):
        self.input_directory = input_directory
        self.output_file = output_file
        self.regexes = regexes
        logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

    def extract_data_from_json(self, file_path, regex_list=None):
        """Extract relevant data from a JSON file."""
        settings, regexes = None, []
        try:
            with open(file_path, 'r') as file:
                data = json.load(file)
            if "settings" in data:
                settings = data["settings"]
            if regex_list:
                for each_regex in regex_list:
                    if each_regex in data:
                        regexes.append({each_regex: data[each_regex]})
            return settings, regexes
        except Exception as e:
            logging.error(f"Error reading JSON file {file_path}: {e}")
        return None, None

    def config_registers_hash(self, config_registers):
        """Create a hash for the config_registers to identify unique configurations."""
        config_str = json.dumps(config_registers, sort_keys=True)
        return md5(config_str.encode('utf-8')).hexdigest()

    @staticmethod
    def add_regexes(merged_data, regexes=None):
        '''Adds regex for boards if present in JSON file.'''
        if regexes:
            for each_mcus_node in merged_data:
                node_num = 0
                for each_schema_node in merged_data[each_mcus_node]:
                    for each_regex in regexes:
                        if each_regex in each_schema_node['settings']:
                            merged_data[each_mcus_node][node_num].update(
                                {each_regex: each_schema_node['settings'][each_regex]}
                            )
                    node_num += 1

    def merge_data(self, json_files, regex_list=None):
        """Merge data from multiple JSON files."""
        merged_data = defaultdict(lambda: defaultdict(list))

        for json_file in json_files:
            settings, regexes = self.extract_data_from_json(json_file, regex_list)
            if settings:
                if "config_words" in settings:
                    config_registers = settings.get("config_words", [])
                elif 'config_registers' in settings:
                    config_registers = settings.get("config_registers", [])

                config_hash = self.config_registers_hash(config_registers)
                mcu = settings.get("mcu", "")
                merged_data[config_hash][mcu].append(settings)
                if regexes:
                    for each_regex in regexes:
                        # Always take last index, as values are appended to array
                        last_index = len(merged_data[config_hash][mcu]) - 1
                        keys = each_regex.keys()
                        for each_key in keys:
                            if each_key not in merged_data[config_hash][mcu][last_index]:
                                merged_data[config_hash][mcu][0].update(each_regex)

        result = defaultdict(list)
        for config_hash, mcus in merged_data.items():
            unique_mcus = sorted(mcus.keys())
            key = "^" + "$|^".join(unique_mcus) + "$"
            added_schemes = set()

            for mcu_settings in mcus.values():
                for settings in mcu_settings:
                    # Modify scheme name and remove unwanted fields
                    modified_settings = settings.copy()
                    scheme_name = settings.get("scheme", "")
                    if '_' in scheme_name:
                        modified_settings["scheme"] = scheme_name.split('_', 1)[1]
                    else:
                        modified_settings["scheme"] = scheme_name

                    # Remove the specified fields
                    modified_settings.pop("mcu", None)
                    modified_settings.pop("delay_src_path", None)
                    modified_settings.pop("name", None)

                    # Only add unique schemes
                    scheme_key = modified_settings["scheme"]
                    if scheme_key not in added_schemes:
                        if "config_words" in modified_settings:
                            modified_settings["type"] = "xc"
                        elif "config_registers" in modified_settings:
                            modified_settings["type"] = "other"

                        result[key].append({"settings": modified_settings})
                        added_schemes.add(scheme_key)

        return result

    def find_schema_files(self, directory):
        """Find all schema files in the specified directory."""
        json_files = []
        for root, dirs, files in os.walk(directory):
            for file in files:
                if file.endswith(".schema"):
                    json_files.append(os.path.join(root, file))
        return json_files

    def generate(self):
        """Generate the final merged and compressed JSON file."""
        json_files = self.find_schema_files(self.input_directory)
        if not json_files:
            logging.warning("No schema files found.")
            return

        os.makedirs(os.path.dirname(self.output_file), exist_ok=True)

        merged_data = self.merge_data(json_files, self.regexes)

        self.add_regexes(merged_data, self.regexes)

        json_str = json.dumps(merged_data, indent=4)
        # Uncomment following 2 lines to see the uncompressed JSON file
        with open(self.output_file.replace('.json', '_uncompressed.json'), 'w') as clocks_json:
            clocks_json.write(json.dumps(merged_data, indent=4))
        compressed_data = zlib.compress(json_str.encode('utf-8'))

        uncompressed_size = len(json_str)
        header = struct.pack('>I', uncompressed_size)
        compressed_data_with_header = header + compressed_data

        try:
            with open(self.output_file, 'wb') as file:  # Writing as binary file
                file.write(compressed_data_with_header)
            logging.info(f"Output file {self.output_file} generated successfully.")
        except Exception as e:
            logging.error(f"Error writing output file {self.output_file}: {e}")
