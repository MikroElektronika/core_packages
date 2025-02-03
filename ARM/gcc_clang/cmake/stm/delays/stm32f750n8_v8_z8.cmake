if(${MCU_NAME} MATCHES "^STM32F750V8$|^STM32F750Z8$|^STM32F750N8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
