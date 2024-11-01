import requests
import xml.etree.ElementTree as ET
import xmltodict
import json
from datetime import datetime

# Step 1: Download the CMSIS index.idx file from the custom link
def download_index_file(url):
    response = requests.get(url)
    if response.status_code == 200:
        return response.content  # Return the raw XML content
    else:
        raise Exception(f"Failed to download index.idx file. Status code: {response.status_code}")


def filter_releases_by_version(json_data):
    try:
        # Extract the pdsc items from the JSON data
        pdsc_items = json_data.get('idx', {}).get('pdsc', [])

        # Iterate through each pdsc item
        for pdsc_item in pdsc_items:
            try:
                # Extract the version to keep
                version_to_keep = pdsc_item.get('@version', None)
                if not version_to_keep:
                    continue

                # Extract the releases array, which can be a list or a dictionary
                releases = pdsc_item.get('atmel:releases', {}).get('atmel:release', [])

                # Check if releases is a dictionary (single release) or a list (multiple releases)
                if isinstance(releases, dict):  # Single release case
                    if releases.get('@version') == version_to_keep:
                        pdsc_item['atmel:releases']['atmel:release'] = [releases]  # Keep as list
                    else:
                        pdsc_item['atmel:releases']['atmel:release'] = []
                elif isinstance(releases, list):  # Multiple releases case
                    filtered_releases = [release for release in releases if release.get('@version') == version_to_keep]
                    pdsc_item['atmel:releases']['atmel:release'] = filtered_releases

            except Exception as pdsc_error:
                print(f"Error processing PDSC item: {pdsc_item}. Error: {pdsc_error}")

    except Exception as e:
        print(f"Error during conversion: {e}")

    return json_data

def generate_list(item_list, tool_to_mcu_list):
    mcu_to_dfp = {}
    for item in item_list:
        if not item:
            print("Item is None or invalid, skipping...")
            continue

        # Safely extract 'type' and 'name' with defaults
        item_type = item.get('type', '')
        name = item.get('name', None)
        mcus = item.get('mcus', [])
        display_name = item.get('display_name')
        if not name:
            print(f"Item without name found, skipping: {item}")
            continue

        if not isinstance(mcus, list):
            print(f"MCUs should be a list but found: {mcus} for item: {name}")
            mcus = []

        if item_type == 'microchip_tp':
            # Populate tool_to_mcu safely
            uid = name.replace('_tool_support', '')
            #
            displayNameMap = {"atmelice" : "ATMEL-ICE",
                            "edbg" : "Atmel® Embedded Debugger (EDBG)",
                            "icd4" : "MPLAB® ICD 4",
                            "icd5" : "MPLAB® ICD 5",
                            "ice4" : "MPLAB® ICE 4",
                            "jtagice3" : "JTAGICE3",
                            "pickit4" : "MPLAB® PICkit™ 4",
                            "pickit5" : "MPLAB® PICkit™ 5",
                            "pkob4" : "PICkit On-Board 4 (PKOB4)",
                            "powerdebugger" : "Power Debugger",
                            "simulator" : "",
                            "snap" : "MPLAB Snap",
                            "medbg" : "mEDBG (Mini Embedded Debugger)",
                            "nedbg" : "PKOB nano",
                            }
            descriptionMap = {
                            "atmelice": "Atmel-ICE is a debugging and programming tool for ARM Cortex-M and AVR microcontrollers.",
                            "edbg": "Atmel Embedded Debugger (EDBG) is an onboard debugger for development kits with Atmel MCUs.",
                            "icd4": "MPLAB ICD 4 is Microchip’s fast, cost-effective debugger for PIC, SAM, and dsPIC devices.",
                            "icd5": "MPLAB ICD 5 provides advanced connectivity and power options for PIC, AVR, SAM, and dsPIC devices.",
                            "ice4": "MPLAB ICE 4 offers feature-rich debugging for PIC, AVR, SAM, and dsPIC devices.",
                            "jtagice3": "Mid-range tool for AVR and SAM D ARM Cortex-M0+ microcontrollers with on-chip debugging.",
                            "pickit4": "MPLAB PICkit 4 allows fast debugging and programming of PIC, dsPIC, AVR, and SAM MCUs.",
                            "pickit5": "MPLAB PICkit 5 supports quick prototyping and production-ready programming for Microchip devices.",
                            "pkob4": "PKOB4 (PICkit On-Board 4) is an onboard debugger with no additional tools required.",
                            "powerdebugger": "Power Debugger for AVR and ARM Cortex-M SAM microcontrollers using various interfaces.",
                            "simulator": "",
                            "snap": "MPLAB Snap is a cost-effective debugger for PIC, dsPIC, AVR, and SAM flash MCUs.",
                            "medbg": "Mini Embedded Debugger (mEDBG).",
                            "nedbg": "Curiosity Nano onboard debugger (nEDBG or PKOB nano)."
                        }


            tool_item = {
                'uid' : uid,
                'installer_package' : name,
                'display_name' : displayNameMap.get(uid, display_name),
                'icon' : f"images/programmers/{uid}.png",
                'hidden' : 0,
                'installed' : 0,
                'description' : descriptionMap.get(uid, ''),
                'mcus' : mcus
            }
            tool_to_mcu_list.append(tool_item)
        else:
            # Ensure correct handling in mcu_to_dfp
            for mcu in mcus:
                if not mcu:
                    print(f"Skipping empty MCU in item: {name}")
                    continue

                # Initialize the list in mcu_to_dfp if not already present
                if mcu not in mcu_to_dfp:
                    mcu_to_dfp[mcu] = []

                # Safely append the item name
                mcu_to_dfp[mcu].append(name)

            print(f"DFP: {name}")
    for tool_item in tool_to_mcu_list:
        tool_item['dfps'] = json.dumps(mcu_to_dfp)




def convert_idx_to_json(xml_content):
    try:
        # Open the idx file
        data_dict = xmltodict.parse(xml_content)

        # Convert the parsed data to JSON format


        data = filter_releases_by_version(data_dict)
        item_list = []
        tool_to_mcu = []

        for item in data.get('idx').get('pdsc'):
            item_list.append(convert_item_to_es_json(item))

        generate_list(item_list, tool_to_mcu)
        return tool_to_mcu, item_list

    except Exception as e:
        print(f"Error during conversion: {e} for item {item}")



def convert_item_to_es_json(input_item):
    # Extract relevant fields
    atmel_name = input_item.get('@atmel:name')
    package_type = 'microchip_dfp'
    if '_TP' in atmel_name:
        package_type = 'microchip_tp'

    version = input_item.get('@version')

    # Safely extract the release date with a fallback default value
    releases = input_item.get('atmel:releases', {}).get('atmel:release', [])
    if not releases:
        print(f"No releases found for item: {atmel_name} version: {version}")
        return None  # Return None if there are no releases

    release_date = releases[0].get('@date', None)

    # Provide a default value or handle missing release_date
    if not release_date:
        print(f"Release date missing for item: {atmel_name} version: {version}")
        release_date = datetime.now().strftime('%Y-%m-%d')  # Use current date as a fallback
    download_link = f"https://packs.download.microchip.com/Microchip.{atmel_name}.{version}.atpack"
    if package_type == 'microchip_tp':
        display_name = f"{atmel_name.replace('_TP', '')} Tool Support"
    else:
        display_name = f"{atmel_name.replace('_DFP', '')} Device Support"
    name = display_name.lower().replace(" ", "_")
    name = name.lower().replace("-", "_")

    # Check if 'atmel:devices' exists and is not None
    if package_type == 'microchip_tp':
        devices_section = input_item.get('atmel:devices', None)
    else:
        devices_section = releases[0].get('atmel:devices', None)
    if devices_section is None:

        print(f"No devices found for item: {atmel_name} version: {version}")
        mcus = []  # Set mcus as an empty list if there are no devices
    else:
        # If devices_section exists, extract the devices
        devices = devices_section.get('atmel:device', [])

        # Handle both list and single dict cases
        if isinstance(devices, dict):  # If it's a single device entry, convert it to a list
            devices = [devices]

        mcus = [device.get('@name') for device in devices if '@name' in device]

    # Construct the output JSON structure
    output_json = {
        "name": name,
        "display_name": display_name,
        "author": "Microchip",
        "hidden": False,
        "type": package_type,
        "version": version,
        "created_at": release_date + "T00:00:00Z",
        "updated_at": release_date + "T00:00:00Z",  # Convert the release date to ISO format with time
        "category": "Microchip Device support",
        "download_link": download_link,
        "package_changed": True,
        "install_location": f"%APPLICATION_DATA_DIR%/packages/packsfolder/Microchip/{atmel_name}/{version}",
        "dependencies": [],
        "mcus": mcus  # This will be an empty list if no devices are found
    }

    return output_json
