if(${MCU_NAME} MATCHES "^STM32WLE5C8$|^STM32WLE5CB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
