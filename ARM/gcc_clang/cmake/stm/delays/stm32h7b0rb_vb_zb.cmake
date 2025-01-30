if(${MCU_NAME} MATCHES "^STM32H7B0RB$|^STM32H7B0ZB$|^STM32H7B0VB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
