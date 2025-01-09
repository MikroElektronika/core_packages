if(${MCU_NAME} MATCHES "^STM32L010F4$|^STM32L010K4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
