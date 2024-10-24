if(${MCU_NAME} MATCHES "^STM32WLE4C8$|^STM32WLE4CB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
