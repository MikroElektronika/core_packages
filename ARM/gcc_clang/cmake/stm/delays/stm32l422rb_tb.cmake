if(${MCU_NAME} MATCHES "^STM32L422RB$|^STM32L422TB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
