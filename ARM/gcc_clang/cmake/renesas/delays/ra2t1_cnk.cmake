if(${MCU_NAME} MATCHES "^R7FA2T1073CNK$|^R7FA2T1074CNK$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
