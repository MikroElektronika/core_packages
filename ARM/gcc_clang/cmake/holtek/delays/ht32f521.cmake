if(${MCU_NAME} MATCHES "^HT32F52142_24QFN$|^HT32F52142_33QFN$|^HT32F52142_46QFN$|^HT32F52142_48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
