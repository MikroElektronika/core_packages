if(${MCU_NAME} MATCHES "^STM32G484CE$|^STM32G484ME$|^STM32G484PE$|^STM32G484RE$|^STM32G484QE$|^STM32G484VE$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
