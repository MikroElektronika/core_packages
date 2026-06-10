if(${MCU_NAME} MATCHES "^HT32F52253-33QFN$|^HT32F52253-46QFN$|^HT32F52253-48LQFP$|^HT32F52253-64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
