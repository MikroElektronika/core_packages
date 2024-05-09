if(${MCU_NAME} MATCHES "^STM32H757AI$|^STM32H757BI$|^STM32H757II$|^STM32H757XI$|^STM32H757ZI$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
