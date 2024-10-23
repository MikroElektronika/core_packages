if(${MCU_NAME} MATCHES "^STM32WLE5JB$|^STM32WLE5JC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
