if(${MCU_NAME} MATCHES "^R7FA4C1BD3CFP$|^R7FA4C1BD3CFM$|^R7FA4C1BB3CFP$|^R7FA4C1BB3CFM$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/5)")
endif()
