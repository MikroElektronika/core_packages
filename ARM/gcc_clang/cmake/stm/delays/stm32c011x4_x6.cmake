if(${MCU_NAME} MATCHES "^STM32C011F4$|^STM32C011J4$|^STM32C011F6$|^STM32C011J6$|^STM32C011D6$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
