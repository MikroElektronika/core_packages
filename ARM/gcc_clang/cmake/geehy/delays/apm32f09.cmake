if(${MCU_NAME} MATCHES "^APM32F091CB$|^APM32F091CC$|^APM32F091RB$|^APM32F091RC$|^APM32F091VB$|^APM32F091VC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
