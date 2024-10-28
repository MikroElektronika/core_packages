if(${MCU_NAME} MATCHES "^STM32U073K8$|^STM32U073H8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
