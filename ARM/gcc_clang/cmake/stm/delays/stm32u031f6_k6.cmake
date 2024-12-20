if(${MCU_NAME} MATCHES "^STM32U031F6$|^STM32U031K6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
