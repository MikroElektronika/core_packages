if(${MCU_NAME} MATCHES "^STM32H563VI$|^STM32H563ZG$|^STM32H563ZI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
