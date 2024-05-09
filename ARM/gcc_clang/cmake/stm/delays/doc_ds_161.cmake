if(${MCU_NAME} MATCHES "^STM32L4Q5AG$|^STM32L4Q5CG$|^STM32L4Q5QG$|^STM32L4Q5RG$|^STM32L4Q5VG$|^STM32L4Q5ZG$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
