import os, re, pytz
from datetime import datetime

# Path to the folder and the MD file
folder_path = "changelog"
file_name = "new_hw.md"
file_path = os.path.join(folder_path, file_name)

# Function to extract date and MCU packages from the file
def extract_info_from_md(file_path):
    with open(file_path, 'r', encoding='utf-8') as file:
        content = file.read()

    # Set the desired timezone, for example, "Europe/Belgrade"
    timezone = pytz.timezone('Europe/Belgrade')

    # Get current date and time
    current_date = datetime.now(timezone).strftime("%a %b %d %H:%M:%S %Z %Y")

    # Extract the MCU package details
    hardware_section_match = re.search(r'Support added for following hardware:\s*\n((?:\s*[+-]\s.*?\n)+)', content, re.DOTALL)

    if hardware_section_match:
        release_packages = {}
        following_hardware = hardware_section_match.group(1).strip().split("\n")
        for hardware_line in following_hardware:
            if hardware_line.startswith('+ ') or hardware_line.startswith('- '):
                current_package = hardware_line.replace('+ ', '').replace('- ', '')
                release_packages[current_package] = []
            else:
                current_mcu = hardware_line.replace('  + ', '').replace('  - ', '')
                release_packages[current_package].append(current_mcu)
    else:
        mcu_package = "No hardware packages found."
        mcu_models = []

    return current_date, release_packages

# Function to create the formatted message
def create_message(date, release_packages):
    message = f"MCU packages Release for {date}:\n\n"
    for mcu_package in release_packages:
        message += f"+ {mcu_package}\n"
        for mcu in release_packages[mcu_package]:
            message += f"  + {mcu}\n"
    message += "\n---"
    return message

# Function to rename the file with the current date
def rename_file_with_date(folder_path, old_file_name):
    current_date = datetime.now().strftime("%Y-%m-%d")  # Format the date as YYYY-MM-DD
    new_file_name = f"{current_date}.md"
    old_file_path = os.path.join(folder_path, old_file_name)
    new_file_path = os.path.join(folder_path, new_file_name)

    # Rename the file
    os.rename(old_file_path, new_file_path)
    with open(new_file_path, 'r') as file:
        new_content = file.read().replace('`DATE`', current_date).replace('#date', f'#{current_date}')
    with open(new_file_path, 'w') as file:
        file.write(new_content)
    return new_file_path

# Function to find the most recent backup file (with format YYYY-MM-DD.md)
def find_latest_backup(folder_path):
    files = os.listdir(folder_path)
    backup_files = [f for f in files if re.match(r'\d{4}-\d{2}-\d{2}\.md', f)]

    if backup_files:
        # Sort the files by date (most recent first)
        backup_files.sort(reverse=True)
        return os.path.join(folder_path, backup_files[0])

    return None

# Function to find the current date file
def find_current_date_file(folder_path):
    current_date = datetime.now().strftime("%Y-%m-%d")
    if os.path.exists(folder_path):
        if os.path.isfile(os.path.join(folder_path, f'{current_date}.md')):
            return os.path.join(folder_path, f'{current_date}.md')

    return None

# Main script execution
if __name__ == "__main__":
    # Check if new_hw.md exists
    if not os.path.exists(file_path):
        # Find the latest backup file
        # Commented out call to API which retrieves newest file
        # file_path = find_latest_backup(folder_path)
        # Changed to always search for exact date file
        file_path = find_current_date_file(folder_path)

        if not file_path:
            print('Failed to find appropriate readme with logged changes.')
            exit(1)  # Exit if neither new_hw.md nor a backup exists

    # Extract information from the file
    date, release_packages = extract_info_from_md(file_path)

    # Create the message
    message = create_message(date, release_packages)
    print(message)

    # If the original new_hw.md existed, rename it to the current date
    if os.path.basename(file_path) == "new_hw.md":
        new_file_path = rename_file_with_date(folder_path, file_name)
