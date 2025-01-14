if(${MCU_NAME} MATCHES "^STM32H533CE$|^STM32H533HE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
