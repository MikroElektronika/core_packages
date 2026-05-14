if(${MCU_NAME} MATCHES "^APM32F465RE$|^APM32F465VE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
