if(${MCU_NAME} MATCHES "^R7FA8E1AFDCFB$|^R7FA8E1AFDCFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/5)")
endif()
