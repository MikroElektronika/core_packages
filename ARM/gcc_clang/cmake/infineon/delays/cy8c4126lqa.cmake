if(${MCU_NAME} MATCHES "^CY8C4126LQA-S453$|^CY8C4126LQA-S455$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
