if(${MCU_NAME} MATCHES "^STM32L552CC$|^STM32L552CE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
