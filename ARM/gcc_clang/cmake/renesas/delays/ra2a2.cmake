if(${MCU_NAME} MATCHES "^R7FA2A2AD3CFP$|^R7FA2A2BD3CFM$|^R7FA2A2BD3CFN$|^R7FA2A2BD3CFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
