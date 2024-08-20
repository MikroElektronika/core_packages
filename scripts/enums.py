from enum import Enum

## Class used for error handling.
## TODO - add new ones if needed.
class errType(Enum):
    SUCCESS = 0
    FAIL = 1

## Enums used for database manipulation
class dbSync(Enum):
    COUNT = 0
    ELEMENTS = 1
    BOARDTODEVICEBOARD = 0
    BOARDTODEVICEDEVICE = 1
    BOARDTODEVICEPACKAGES = 2
    DEVICETOPACKAGEUID = 0
    DEVICETOPACKAGEDEF = 1
    PROGRAMMERSPROGRAMMER = 0
    PROGRAMMERTODEVICEPROGRAMMER = 0
    PROGRAMMERTODEVICEDEVICE = 1
