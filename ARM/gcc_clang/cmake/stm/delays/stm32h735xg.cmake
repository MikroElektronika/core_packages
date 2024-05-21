if(${MCU_NAME} MATCHES "^STM32H735AG$|^STM32H735IG$|^STM32H735RG$|^STM32H735VG$|^STM32H735ZG$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
