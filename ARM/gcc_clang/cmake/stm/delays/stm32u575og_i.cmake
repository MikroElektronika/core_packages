if(${MCU_NAME} MATCHES "^STM32U575OG$|^STM32U575OI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
