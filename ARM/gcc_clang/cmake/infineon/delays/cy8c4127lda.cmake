if(${MCU_NAME} MATCHES "^CY8C4127LDA-S443$|^CY8C4127LDA-S453$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
