if(${MCU_NAME} MATCHES "^MKV5[68]F.+$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
