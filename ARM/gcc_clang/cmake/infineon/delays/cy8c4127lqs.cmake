if(${MCU_NAME} MATCHES "^CY8C4127LQS-S443$|^CY8C4127LQS-S445$|^CY8C4127LQS-S453$|^CY8C4127LQS-S455$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
