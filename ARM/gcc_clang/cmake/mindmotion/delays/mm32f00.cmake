if(${MCU_NAME} MATCHES "^MM32F0010A1N$|^MM32F0010A1T$|^MM32F003NW$|^MM32F003TW$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
