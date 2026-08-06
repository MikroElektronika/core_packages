if(${MCU_NAME} MATCHES "^BAT32G139GK48FA$|^BAT32G139GK64FB$|^BAT32G139GK80FA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
