import os
import json
import zlib
import struct
from collections import defaultdict
from hashlib import md5

class GenerateClocks:
    def __init__(self, input_directory, output_file):
        self.input_directory = input_directory
        self.output_file = output_file

    def extract_data_from_json(self, file_path):
        with open(file_path, 'r') as file:
            data = json.load(file)

        if "config_registers" in data:
            extracted_data = {
                "config_registers": data.get("config_registers", []),
                "mcu": data.get("mcu", ""),
                "clock": data.get("clock", ""),
                "core": data.get("core", "")
            }
            return extracted_data
        elif "config_words" in data:
            extracted_data = {
                "config_words": data.get("config_words", []),
                "mcu": data.get("mcu", ""),
                "clock": data.get("clock", ""),
                "core": data.get("core", "")
            }
            return extracted_data
        else:
            return None

    def config_registers_hash(self, config_registers):
        """Create a hash for the config_registers to identify unique configurations."""
        config_str = json.dumps(config_registers, sort_keys=True)
        return md5(config_str.encode('utf-8')).hexdigest()

    def merge_data(self, json_files):
        merged_data = defaultdict(list)

        for json_file in json_files:
            data = self.extract_data_from_json(json_file)
            if data:

                if "config_registers" in data:
                    config_registers = data["config_registers"]
                    mcu = data["mcu"]
                    clock = data["clock"]
                    core = data["core"]
                    config_hash = self.config_registers_hash(config_registers)
                    merged_data[config_hash].append((mcu, config_registers, None, clock, core))
                elif "config_words" in data:
                    config_words = data["config_words"]
                    mcu = data["mcu"]
                    clock = data["clock"]
                    core = data["core"]
                    config_hash = self.config_registers_hash(config_words)
                    merged_data[config_hash].append((mcu, None, config_words, clock, core))


        result = {}
        for mcus in merged_data.values():
            unique_mcus = sorted(set(mcu for mcu, _, __, ___, ____ in mcus))
            key = "^" + "$|^".join(unique_mcus) + "$"
            if "PIC32MX675F512L" in key:
                print("sadasd")
            config_registers = mcus[0][1]  # All config_registers are the same for this group
            config_words = mcus[0][2]  # All config_words are the same for this group
            clock = mcus[0][3]  # All clocks are the same for this group
            core = mcus[0][4]  # All cores are the same for this group
            config_obj = None
            if key in result:
                config_obj = result[key]
            if not config_obj:
                config_obj = {}
            if config_registers:
                 config_obj['other'] = {
                    "config_registers": config_registers,
                    "clock": clock,
                    "core": core
                }
            if config_words:
                 config_obj['xc'] = {
                    "config_words": config_words,
                    "clock": clock,
                    "core": core
                }

            result[key] = config_obj

        return result

    def find_json_files(self, directory):
        json_files = []
        for root, dirs, files in os.walk(directory):
            for file in files:
                if file.endswith(".json"):
                    json_files.append(os.path.join(root, file))
        return json_files

    def generate(self):
        json_files = self.find_json_files(self.input_directory)
        merged_data = self.merge_data(json_files)

        json_str = json.dumps(merged_data, indent=4)
        compressed_data = zlib.compress(json_str.encode('utf-8'))

        uncompressed_size = len(json_str)
        header = struct.pack('>I', uncompressed_size)
        compressed_data_with_header = header + compressed_data

        with open(self.output_file, 'wb') as file:
            file.write(compressed_data_with_header)