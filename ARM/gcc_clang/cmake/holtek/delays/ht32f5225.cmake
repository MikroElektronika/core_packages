if(${MCU_NAME} MATCHES "^HT32F52253_33QFN$|^HT32F52253_46QFN$|^HT32F52253_48LQFP$|^HT32F52253_64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
