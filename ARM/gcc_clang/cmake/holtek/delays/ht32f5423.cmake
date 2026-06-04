if(${MCU_NAME} MATCHES "^HT32F54231_28SSOP$|^HT32F54231_32QFN$|^HT32F54231_46QFN$|^HT32F54231_48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
