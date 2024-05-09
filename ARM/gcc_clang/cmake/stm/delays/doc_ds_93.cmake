if(${MCU_NAME} MATCHES "^STM32H723VE$|^STM32H723VG$|^STM32H723ZE$|^STM32H723ZG$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
