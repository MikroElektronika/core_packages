if(${MCU_NAME} MATCHES "^S6E1C32D0AGN20000$|^S6E1C32D0AGV20000$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
