if(${MCU_NAME} MATCHES "^STM32U5A5AJ$|^STM32U5A5QI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
