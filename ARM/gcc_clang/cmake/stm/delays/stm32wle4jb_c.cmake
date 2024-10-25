if(${MCU_NAME} MATCHES "^STM32WLE4JB$|^STM32WLE4JC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
