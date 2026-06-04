if(${MCU_NAME} MATCHES "^HT32F49041_20TSSOP$|^HT32F49041_32QFN$|^HT32F49041_48LQFP$|^HT32F49041_64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
