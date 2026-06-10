if(${MCU_NAME} MATCHES "^HT32F49041-20TSSOP$|^HT32F49041-32QFN$|^HT32F49041-48LQFP$|^HT32F49041-64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
