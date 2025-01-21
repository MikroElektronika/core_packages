if(${MCU_NAME} MATCHES "^STM32H7A3VI$|^STM32H7A3NI$|^STM32H7A3LI$|^STM32H7A3QI$|^STM32H7A3ZI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
