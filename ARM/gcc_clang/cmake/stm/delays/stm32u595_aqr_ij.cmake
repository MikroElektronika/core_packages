if(${MCU_NAME} MATCHES "^STM32U595AI$|^STM32U595AJ$|^STM32U595QI$|^STM32U595QJ$|^STM32U595RI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
