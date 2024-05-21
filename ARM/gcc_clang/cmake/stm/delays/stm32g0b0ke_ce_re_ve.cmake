if(${MCU_NAME} MATCHES "^STM32G0B0KE$|^STM32G0B0CE$|^STM32G0B0RE$|^STM32G0B0VE$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
