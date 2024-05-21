if(${MCU_NAME} MATCHES "^STM32H730AB$|^STM32H730IB$|^STM32H730VB$|^STM32H730ZB$")
  list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
