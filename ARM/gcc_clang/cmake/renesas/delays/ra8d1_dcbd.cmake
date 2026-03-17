if(${MCU_NAME} MATCHES "^R7FA8D1AFDCBD$|^R7FA8D1AHDCBD$|^R7FA8D1BFDCBD$|^R7FA8D1BHDCBD$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
