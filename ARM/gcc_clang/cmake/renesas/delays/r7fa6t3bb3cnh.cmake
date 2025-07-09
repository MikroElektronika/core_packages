if(${MCU_NAME} MATCHES "^R7FA6T3BB3CNH$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
