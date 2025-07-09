if(${MCU_NAME} MATCHES "^R7FA4E10B2CFM$|^R7FA4E10B2CNE$|^R7FA4E10D2CFM$|^R7FA4E10D2CNE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
