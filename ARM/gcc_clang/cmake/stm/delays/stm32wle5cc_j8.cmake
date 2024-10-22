if(${MCU_NAME} MATCHES "^STM32WLE5CC$|^STM32WLE5J8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
