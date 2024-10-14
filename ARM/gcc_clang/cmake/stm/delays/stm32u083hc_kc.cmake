if(${MCU_NAME} MATCHES "^STM32U083KC$|^STM32U083HC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
