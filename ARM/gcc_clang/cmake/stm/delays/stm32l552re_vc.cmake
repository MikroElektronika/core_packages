if(${MCU_NAME} MATCHES "^STM32L552RE$|^STM32L552VC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
