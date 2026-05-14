if(${MCU_NAME} MATCHES "^APM32F103ZC$|^APM32F103ZD$|^APM32F103ZE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
