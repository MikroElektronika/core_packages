if(${MCU_NAME} MATCHES "^HT32F52142-24QFN$|^HT32F52142-33QFN$|^HT32F52142-46QFN$|^HT32F52142-48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
