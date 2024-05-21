if(${MCU_NAME} MATCHES "^STM32H733VG$|^STM32H733ZG$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
