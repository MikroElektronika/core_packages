if(${MCU_NAME} MATCHES "^STM32U073RB$|^STM32U073MB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
