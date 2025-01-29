if(${MCU_NAME} MATCHES "^STM32U585VI$|^STM32U585ZI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
