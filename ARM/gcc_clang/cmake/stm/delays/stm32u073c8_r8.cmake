if(${MCU_NAME} MATCHES "^STM32U073C8$|^STM32U073R8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
