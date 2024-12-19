if(${MCU_NAME} MATCHES "^STM32H563AG$|^STM32H563AI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
