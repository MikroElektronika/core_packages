if(${MCU_NAME} MATCHES "^M253LD3BE$|^M253LE3BE$|^M253ZE3BE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
