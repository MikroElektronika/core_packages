if(${MCU_NAME} MATCHES "^STM32H7B0AB$|^STM32H7B0IB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
