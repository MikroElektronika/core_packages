if(${MCU_NAME} MATCHES "^STM32G483CE$|^STM32G483RE$|^STM32G483ME$|^STM32G483PE$|^STM32G483VE$|^STM32G483QE$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
