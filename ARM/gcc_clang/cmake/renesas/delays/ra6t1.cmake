if(${MCU_NAME} MATCHES "^R7FA6T1AB3CFM$|^R7FA6T1AB3CFP$|^R7FA6T1AD3CFM$|^R7FA6T1AD3CFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
