if(${MCU_NAME} MATCHES "^HT32F50343-32QFN$|^HT32F50343-46QFN$|^HT32F50343-48LQFP$|^HT32F50343-64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
