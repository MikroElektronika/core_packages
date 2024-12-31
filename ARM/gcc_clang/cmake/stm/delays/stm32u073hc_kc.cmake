if(${MCU_NAME} MATCHES "^STM32U073KC$|^STM32U073HC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
