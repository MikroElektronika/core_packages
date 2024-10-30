if(${MCU_NAME} MATCHES "^STM32L552QE$|^STM32L552RC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
