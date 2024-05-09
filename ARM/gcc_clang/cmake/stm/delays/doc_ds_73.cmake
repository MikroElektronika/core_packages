if(${MCU_NAME} MATCHES "^STM32G050C6$|^STM32G050F6$|^STM32G050K6$|^STM32G050C8$|^STM32G050K8$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
