if(${MCU_NAME} MATCHES "^STM32U031G6$|^STM32U031F8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
