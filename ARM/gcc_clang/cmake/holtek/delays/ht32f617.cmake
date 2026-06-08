if(${MCU_NAME} MATCHES "^HT32F61730_64LQFP_EP$|^HT32F61741_64LQFP_EP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
