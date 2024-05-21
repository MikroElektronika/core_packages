if(${MCU_NAME} MATCHES "^STM32G4A1CE$|^STM32G4A1KE$|^STM32G4A1ME$|^STM32G4A1RE$|^STM32G4A1VE$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
