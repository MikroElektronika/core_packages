if(${MCU_NAME} MATCHES "^STM32U073CC$|^STM32U073RC$|^STM32U073MC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
