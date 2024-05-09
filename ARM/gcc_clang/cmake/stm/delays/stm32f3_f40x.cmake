if((${MCU_NAME} MATCHES "(^STM32F3(.+)$)") OR (${MCU_NAME} MATCHES "(^STM32F4[0-2][0-35](.+)$)|(^STM32F4[0-1][7](.+)$)"))
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/8)")
endif()
