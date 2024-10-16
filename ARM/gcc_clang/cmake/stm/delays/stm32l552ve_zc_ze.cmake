if(${MCU_NAME} MATCHES "^STM32L552VE$|^STM32L552ZC$|^STM32L552ZE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
