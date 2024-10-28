if(${MCU_NAME} MATCHES "^STM32U5A9BJ$|^STM32U5A9NJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
