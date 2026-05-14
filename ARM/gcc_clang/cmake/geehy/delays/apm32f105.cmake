if(${MCU_NAME} MATCHES "^APM32F105R8$|^APM32F105RB$|^APM32F105RC$|^APM32F105V8$|^APM32F105VB$|^APM32F105VC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
