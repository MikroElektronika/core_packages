import json
import logging
import os
import struct
import zlib
from collections import defaultdict


class GenerateSchemas:
    """Generate deterministic MCU schemas without overlapping MCU regex groups."""

    TYPE_PRIORITY = {
        "other": 0,  # mikroC/internal register representation
        "xc": 1,     # XC config-word representation
    }

    def __init__(self, input_directory, output_file, regexes=None):
        self.input_directory = input_directory
        self.output_file = output_file
        self.regexes = regexes or []
        logging.basicConfig(
            level=logging.INFO,
            format="%(asctime)s - %(levelname)s - %(message)s",
        )

    @staticmethod
    def canonical_json(value):
        return json.dumps(
            value,
            sort_keys=True,
            ensure_ascii=False,
            separators=(",", ":"),
        )

    @staticmethod
    def normalized_scheme_name(settings):
        scheme_name = settings.get("scheme", "")
        if "_" in scheme_name:
            return scheme_name.split("_", 1)[1]
        return scheme_name

    def extract_data_from_json(self, file_path):
        try:
            with open(file_path, "r", encoding="utf-8") as file:
                data = json.load(file)
        except (OSError, json.JSONDecodeError) as exc:
            raise ValueError(f"Cannot read schema file {file_path}: {exc}") from exc

        settings = data.get("settings")
        if not settings:
            return None

        settings = settings.copy()
        for regex_name in self.regexes:
            if regex_name in data and regex_name not in settings:
                settings[regex_name] = data[regex_name]

        return settings

    def make_output_node(self, settings):
        output_settings = settings.copy()
        output_settings["scheme"] = self.normalized_scheme_name(output_settings)

        output_settings.pop("mcu", None)
        output_settings.pop("delay_src_path", None)
        output_settings.pop("name", None)

        has_words = "config_words" in output_settings
        has_registers = "config_registers" in output_settings
        if has_words == has_registers:
            raise ValueError(
                "Each schema must contain exactly one of config_words or "
                "config_registers"
            )

        output_settings["type"] = "xc" if has_words else "other"

        node = {"settings": output_settings}
        for regex_name in self.regexes:
            if regex_name in output_settings:
                node[regex_name] = output_settings[regex_name]

        return node

    def node_identity(self, node):
        """
        Identity used only to detect ambiguous duplicates.

        XC and mikroC versions of the same visible scheme are intentionally
        different because `type` is part of this identity.
        """
        settings = node["settings"]
        regex_values = tuple(
            (name, self.canonical_json(node.get(name)))
            for name in self.regexes
        )
        return (
            settings.get("scheme", ""),
            settings.get("type", ""),
            regex_values,
        )

    def node_sort_key(self, node):
        settings = node["settings"]
        return (
            settings.get("scheme", "").casefold(),
            self.TYPE_PRIORITY.get(settings.get("type", ""), 99),
            self.canonical_json(node),
        )

    def merge_data(self, json_files):
        # First create the COMPLETE schema bundle for every individual MCU.
        # This ensures an MCU occurs in exactly one generated top-level regex.
        schemas_by_mcu = defaultdict(list)
        identities_by_mcu = defaultdict(dict)

        for json_file in json_files:
            settings = self.extract_data_from_json(json_file)
            if not settings:
                continue

            mcu = settings.get("mcu", "").strip()
            if not mcu:
                raise ValueError(f"Schema has no MCU name: {json_file}")

            node = self.make_output_node(settings)
            identity = self.node_identity(node)
            canonical = self.canonical_json(node)
            relative_source = os.path.relpath(
                json_file, self.input_directory
            ).replace(os.sep, "/")

            previous = identities_by_mcu[mcu].get(identity)
            if previous is not None:
                if previous["canonical"] != canonical:
                    raise ValueError(
                        "Conflicting schema definitions for the same MCU, "
                        "scheme, compiler type, and board selector. "
                        f"MCU={mcu!r}, scheme={identity[0]!r}, "
                        f"type={identity[1]!r}, "
                        f"first_source={previous['source']!r}, "
                        f"second_source={relative_source!r}"
                    )
                # Exact duplicate: keep one copy.
                continue

            identities_by_mcu[mcu][identity] = {
                "canonical": canonical,
                "source": relative_source,
            }
            schemas_by_mcu[mcu].append(node)

        for nodes in schemas_by_mcu.values():
            nodes.sort(key=self.node_sort_key)

        # Group MCUs only when their COMPLETE schema bundles are identical.
        # This keeps compression benefits without creating overlapping regexes.
        mcus_by_bundle = defaultdict(list)
        bundle_nodes = {}

        for mcu in sorted(schemas_by_mcu):
            nodes = schemas_by_mcu[mcu]
            bundle_key = self.canonical_json(nodes)
            mcus_by_bundle[bundle_key].append(mcu)
            bundle_nodes[bundle_key] = nodes

        result = {}
        grouped = []
        for bundle_key, mcus in mcus_by_bundle.items():
            mcus.sort()
            regex_key = "^" + "$|^".join(mcus) + "$"
            grouped.append((regex_key, bundle_nodes[bundle_key]))

        # Safe because every MCU is present in exactly one regex key.
        for regex_key, nodes in sorted(grouped, key=lambda item: item[0]):
            result[regex_key] = nodes

        return result

    def find_schema_files(self, directory):
        json_files = []
        for root, dirs, files in os.walk(directory):
            dirs.sort()
            for file_name in sorted(files):
                if file_name.endswith(".schema"):
                    json_files.append(os.path.join(root, file_name))

        return sorted(
            json_files,
            key=lambda path: os.path.relpath(path, directory).replace(os.sep, "/"),
        )

    def generate(self):
        json_files = self.find_schema_files(self.input_directory)
        if not json_files:
            logging.warning("No schema files found.")
            return

        output_parent = os.path.dirname(self.output_file)
        if output_parent:
            os.makedirs(output_parent, exist_ok=True)

        merged_data = self.merge_data(json_files)

        json_str = json.dumps(
            merged_data,
            indent=4,
            sort_keys=True,
            ensure_ascii=False,
        )
        json_bytes = json_str.encode("utf-8")

        uncompressed_path = self.output_file.replace(
            ".json", "_uncompressed.json"
        )
        with open(uncompressed_path, "w", encoding="utf-8", newline="\n") as file:
            file.write(json_str)

        compressed_data = zlib.compress(json_bytes)
        header = struct.pack(">I", len(json_bytes))

        with open(self.output_file, "wb") as file:
            file.write(header + compressed_data)

        logging.info("Output file %s generated successfully.", self.output_file)
