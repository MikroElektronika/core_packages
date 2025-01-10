if(${MCU_NAME} MATCHES "^STM32H573AI$|^STM32H573II$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
