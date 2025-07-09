if(${MCU_NAME} MATCHES "^R7FA6M1AD2CLJ$|^R7FA6M1AD3CFM$|^R7FA6M1AD3CFP$|^R7FA6M1AD3CLJ$|^R7FA6M1AD3CNB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
