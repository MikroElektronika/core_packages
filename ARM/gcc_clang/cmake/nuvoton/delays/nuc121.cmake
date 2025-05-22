if(${MCU_NAME} MATCHES "^NUC121LC2AE$|^NUC121SC2AE$|^NUC121ZC2AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
