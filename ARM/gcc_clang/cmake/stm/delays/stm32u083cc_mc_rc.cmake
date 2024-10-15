if(${MCU_NAME} MATCHES "^STM32U083CC$|^STM32U083RC$|^STM32U083MC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
