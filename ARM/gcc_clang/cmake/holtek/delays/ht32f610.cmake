if(${MCU_NAME} MATCHES "^HT32F61030-36QFN$|^HT32F61041-46QFN$|^HT32F61049-48LQFP$|^HT32F61052-64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
