if(${MCU_NAME} MATCHES "^HT32F5828-48LQFP$|^HT32F5828-80LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
