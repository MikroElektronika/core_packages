if(${MCU_NAME} MATCHES "^CY8C4127LQA-S443$|^CY8C4127LQA-S445$|^CY8C4127LQA-S453$|^CY8C4127LQA-S455$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
