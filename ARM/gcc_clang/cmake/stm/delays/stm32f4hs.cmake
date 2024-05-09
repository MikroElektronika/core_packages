if(${MCU_NAME} MATCHES "(^STM32F4[2-467][6-79](.+)$)")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
