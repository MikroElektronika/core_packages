if(${MCU_NAME} MATCHES "^HT32F52367-46QFN$|^HT32F52367-48LQFP$|^HT32F52367-64LQFP$|^HT32F52367-80LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
