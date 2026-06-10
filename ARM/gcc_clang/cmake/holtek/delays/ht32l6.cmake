if(${MCU_NAME} MATCHES "^HT32L62141-64LQFP$|^HT32L64041-64LQFP$|^HT32L64141-64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
