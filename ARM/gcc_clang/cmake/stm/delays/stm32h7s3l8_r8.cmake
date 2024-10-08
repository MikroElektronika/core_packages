if(${MCU_NAME} MATCHES "^STM32H7S3L8$|^STM32H7S3R8$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
