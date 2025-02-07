if(${MCU_NAME} MATCHES "^STM32U5G7VJ$|^STM32U5G9BJ$|^STM32U5G9NJ$|^STM32U5G9VJ$|^STM32U5G9ZJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
