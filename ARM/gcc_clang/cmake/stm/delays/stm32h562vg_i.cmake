if(${MCU_NAME} MATCHES "^STM32H562VG$|^STM32H562VI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
