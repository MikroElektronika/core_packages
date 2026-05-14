if(${MCU_NAME} MATCHES "^APM32F107RB$|^APM32F107RC$|^APM32F107VB$|^APM32F107VC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
