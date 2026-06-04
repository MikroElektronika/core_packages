if(${MCU_NAME} MATCHES "^HT32F50343_32QFN$|^HT32F50343_46QFN$|^HT32F50343_48LQFP$|^HT32F50343_64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
