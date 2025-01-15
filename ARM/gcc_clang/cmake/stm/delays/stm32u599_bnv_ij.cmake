if(${MCU_NAME} MATCHES "^STM32U599BJ$|^STM32U599NI$|^STM32U599NJ$|^STM32U599VI$|^STM32U599VJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
