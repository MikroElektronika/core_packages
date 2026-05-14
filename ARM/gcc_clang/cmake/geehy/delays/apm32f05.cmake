if(${MCU_NAME} MATCHES "^APM32F051C6$|^APM32F051C8$|^APM32F051K6$|^APM32F051K8$|^APM32F051R6$|^APM32F051R8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
