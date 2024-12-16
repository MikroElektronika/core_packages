if(${MCU_NAME} MATCHES "^STM32U5A5VJ$|^STM32U5A5ZJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
