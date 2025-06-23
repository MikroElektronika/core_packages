if(${MCU_NAME} MATCHES "^NUC131LC2AE$|^NUC131LD2AE$|^NUC131SC2AE$|^NUC131SD2AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
