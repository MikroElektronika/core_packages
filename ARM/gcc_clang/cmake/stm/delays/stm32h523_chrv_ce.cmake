if(${MCU_NAME} MATCHES "^STM32H523CC$|^STM32H523RC$|^STM32H523CE$|^STM32H523HE$|^STM32H523VC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
