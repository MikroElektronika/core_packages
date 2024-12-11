if(${MCU_NAME} MATCHES "^STM32U575ZG$|^STM32U575ZI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
