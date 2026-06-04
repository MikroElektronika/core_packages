if(${MCU_NAME} MATCHES "^HT32F52367_46QFN$|^HT32F52367_48LQFP$|^HT32F52367_64LQFP$|^HT32F52367_80LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
