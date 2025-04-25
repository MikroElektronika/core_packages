if(${MCU_NAME} MATCHES "^MKM34Z256VLL7$|^MKM34Z256VLQ7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
