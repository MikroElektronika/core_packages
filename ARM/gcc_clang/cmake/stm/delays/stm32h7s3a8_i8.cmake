if(${MCU_NAME} MATCHES "^STM32H7S3A8$|^STM32H7S3I8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
