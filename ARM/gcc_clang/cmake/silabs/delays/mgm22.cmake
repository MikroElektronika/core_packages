if(${MCU_NAME} MATCHES "^MGM220PC22HNA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
