if(${MCU_NAME} MATCHES "^STM32L552ME$|^STM32L552QC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
