if(${MCU_NAME} MATCHES "^STM32H7S3V8$|^STM32H7S3Z8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
