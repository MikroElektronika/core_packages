if(${MCU_NAME} MATCHES "^STM32G441CB$|^STM32G441KB$|^STM32G441RB$|^STM32G441MB$|^STM32G441VB$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
