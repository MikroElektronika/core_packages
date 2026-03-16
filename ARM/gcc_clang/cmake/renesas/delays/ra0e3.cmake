if(${MCU_NAME} MATCHES "^R7FA0E3034ZSD$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
