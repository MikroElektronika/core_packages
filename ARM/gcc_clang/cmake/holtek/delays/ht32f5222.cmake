if(${MCU_NAME} MATCHES "^HT32F52220-24SSOP$|^HT32F52220-28SSOP$|^HT32F52220-33QFN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
