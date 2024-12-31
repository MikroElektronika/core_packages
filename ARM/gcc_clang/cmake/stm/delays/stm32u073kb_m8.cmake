if(${MCU_NAME} MATCHES "^STM32U073M8$|^STM32U073KB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
