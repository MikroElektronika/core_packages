if(${MCU_NAME} MATCHES "^R7FA6T3BB3CFJ$|^R7FA6T3BB3CFL$|^R7FA6T3BB3CFM$|^R7FA6T3BB3CNE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
