if(${MCU_NAME} MATCHES "^STM32U031R8$|^STM32U031G8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
