if(${MCU_NAME} MATCHES "^STM32H503EB$|^STM32H503KB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
