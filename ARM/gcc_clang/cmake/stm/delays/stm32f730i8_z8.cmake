if(${MCU_NAME} MATCHES "^STM32F730Z8$|^STM32F730I8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
