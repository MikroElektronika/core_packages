if(${MCU_NAME} MATCHES "^R7KA8T2AFDCAC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/5)")
endif()
