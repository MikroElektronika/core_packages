if(${MCU_NAME} MATCHES "^STM32L010RB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
