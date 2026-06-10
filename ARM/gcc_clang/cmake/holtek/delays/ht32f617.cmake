if(${MCU_NAME} MATCHES "^HT32F61730-64LQFP-EP$|^HT32F61741-64LQFP-EP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
