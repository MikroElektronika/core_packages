if(${MCU_NAME} MATCHES "^HT32F54231-28SSOP$|^HT32F54231-32QFN$|^HT32F54231-46QFN$|^HT32F54231-48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
