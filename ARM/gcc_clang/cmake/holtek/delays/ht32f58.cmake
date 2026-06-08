if(${MCU_NAME} MATCHES "^HT32F5828_48LQFP$|^HT32F5828_80LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
