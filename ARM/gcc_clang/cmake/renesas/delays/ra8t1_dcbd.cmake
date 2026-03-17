if(${MCU_NAME} MATCHES "^R7FA8T1AFDCBD$|^R7FA8T1AHDCBD$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
