if(${MCU_NAME} MATCHES "^CY8C4126LQE-S453$|^CY8C4126LQE-S455$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
