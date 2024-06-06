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
                config_registers = data["config_registers"]
                mcu = data["mcu"]
                clock = data["clock"]
                core = data["core"]
                config_hash = self.config_registers_hash(config_registers)
                merged_data[config_hash].append((mcu, config_registers, clock, core))

        result = {}
        for mcus in merged_data.values():
            unique_mcus = sorted(set(mcu for mcu, _, __, ___ in mcus))
            key = "^" + "$|^".join(unique_mcus) + "$"
            config_registers = mcus[0][1]  # All config_registers are the same for this group
            clock = mcus[0][2]  # All clocks are the same for this group
            core = mcus[0][3]  # All cores are the same for this group
            if config_registers:
                result[key] = {
                    "config_registers": config_registers,
                    "clock": clock,
                    "core": core
                }

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