if(${MCU_NAME} MATCHES "^STM32H747AI$|^STM32H747BI$|^STM32H747II$|^STM32H747XI$|^STM32H747ZI$|^STM32H747AG$|^STM32H747BG$|^STM32H747IG$|^STM32H747XG$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()