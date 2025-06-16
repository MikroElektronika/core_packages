if(${MCU_NAME} MATCHES "^NUC125LC2AE$|^NUC125SC2AE$|^NUC125ZC2AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
