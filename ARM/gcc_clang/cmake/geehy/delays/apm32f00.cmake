if(${MCU_NAME} MATCHES "^APM32F003F4$|^APM32F003F6$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
