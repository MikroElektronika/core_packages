if(${MCU_NAME} MATCHES "^STM32U535CB$|^STM32U535CC$|^STM32U535CE$|^STM32U535JE$|^STM32U535NC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
