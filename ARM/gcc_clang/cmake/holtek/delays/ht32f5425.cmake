if(${MCU_NAME} MATCHES "^HT32F54253_32QFN$|^HT32F54253_46QFN$|^HT32F54253_48LQFP$|^HT32F54253_64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
