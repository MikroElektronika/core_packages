if(${MCU_NAME} MATCHES "^STM32U575CG$|^STM32U575CI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
