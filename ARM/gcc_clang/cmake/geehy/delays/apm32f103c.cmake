if(${MCU_NAME} MATCHES "^APM32F103C4$|^APM32F103C6$|^APM32F103C8$|^APM32F103CB$|^APM32F103CC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
