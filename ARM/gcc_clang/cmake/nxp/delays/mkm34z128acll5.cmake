if(${MCU_NAME} MATCHES "^MKM34Z128ACLL5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
