if(${MCU_NAME} MATCHES "^HT32F54253-32QFN$|^HT32F54253-46QFN$|^HT32F54253-48LQFP$|^HT32F54253-64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
