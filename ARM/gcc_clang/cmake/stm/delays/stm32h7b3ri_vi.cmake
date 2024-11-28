if(${MCU_NAME} MATCHES "^STM32H7B3RI$|^STM32H7B3VI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
