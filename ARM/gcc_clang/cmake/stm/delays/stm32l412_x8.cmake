if(${MCU_NAME} MATCHES "^STM32L412C8$|^STM32L412K8$|^STM32L412R8$|^STM32L412T8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
