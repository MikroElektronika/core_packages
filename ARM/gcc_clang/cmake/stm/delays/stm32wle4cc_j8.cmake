if(${MCU_NAME} MATCHES "^STM32WLE4CC$|^STM32WLE4J8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
