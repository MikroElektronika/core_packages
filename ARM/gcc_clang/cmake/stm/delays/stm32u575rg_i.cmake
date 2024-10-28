if(${MCU_NAME} MATCHES "^STM32U575RG$|^STM32U575RI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
