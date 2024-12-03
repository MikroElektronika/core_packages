if(${MCU_NAME} MATCHES "^STM32U575AG$|^STM32U575AI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
