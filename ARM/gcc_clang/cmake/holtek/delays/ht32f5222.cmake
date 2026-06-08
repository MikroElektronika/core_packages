if(${MCU_NAME} MATCHES "^HT32F52220_24SSOP$|^HT32F52220_28SSOP$|^HT32F52220_33QFN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
