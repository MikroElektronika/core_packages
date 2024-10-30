if(${MCU_NAME} MATCHES "^STM32L412CB$|^STM32L412KB$|^STM32L412RB$|^STM32L412TB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
