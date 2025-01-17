if(${MCU_NAME} MATCHES "^STM32F730R8$|^STM32F730V8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
