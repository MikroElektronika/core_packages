if(${MCU_NAME} MATCHES "^HT50F32016-48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
