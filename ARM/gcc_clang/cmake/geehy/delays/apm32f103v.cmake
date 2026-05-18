if(${MCU_NAME} MATCHES "^APM32F103V8$|^APM32F103VB$|^APM32F103VC$|^APM32F103VD$|^APM32F103VE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
