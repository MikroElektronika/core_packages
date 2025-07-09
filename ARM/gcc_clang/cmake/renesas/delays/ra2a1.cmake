if(${MCU_NAME} MATCHES "^R7FA2A1AB2CBT$|^R7FA2A1AB3CFJ$|^R7FA2A1AB3CFM$|^R7FA2A1AB3CNE$|^R7FA2A1AB3CNF$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
