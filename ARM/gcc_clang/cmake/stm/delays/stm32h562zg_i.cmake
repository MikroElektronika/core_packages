if(${MCU_NAME} MATCHES "^STM32H562ZG$|^STM32H562ZI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
