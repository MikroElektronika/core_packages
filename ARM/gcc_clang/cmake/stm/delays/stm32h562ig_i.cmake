if(${MCU_NAME} MATCHES "^STM32H562IG$|^STM32H562II$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
