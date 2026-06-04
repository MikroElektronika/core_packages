if(${MCU_NAME} MATCHES "^NUC121WC2AE$|^NUC121Y25CN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
