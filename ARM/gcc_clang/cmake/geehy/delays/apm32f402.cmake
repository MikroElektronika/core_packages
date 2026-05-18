if(${MCU_NAME} MATCHES "^APM32F402CB$|^APM32F402RB$|^APM32F402TB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
