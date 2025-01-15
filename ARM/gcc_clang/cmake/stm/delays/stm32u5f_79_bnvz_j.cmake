if(${MCU_NAME} MATCHES "^STM32U5F7VJ$|^STM32U5F9BJ$|^STM32U5F9NJ$|^STM32U5F9VJ$|^STM32U5F9ZJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
