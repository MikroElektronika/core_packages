if(${MCU_NAME} MATCHES "^APM32F405RG$|^APM32F405VG$|^APM32F405ZG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
