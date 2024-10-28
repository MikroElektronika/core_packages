if(${MCU_NAME} MATCHES "^STM32H503CB$|^STM32H503RB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
