if(${MCU_NAME} MATCHES "^STM32H563RI$|^STM32H563VG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
