if(${MCU_NAME} MATCHES "^HT32F52331-33QFN$|^HT32F52331-48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
