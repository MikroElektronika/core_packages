if(${MCU_NAME} MATCHES "^MKW24D512VHA5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
