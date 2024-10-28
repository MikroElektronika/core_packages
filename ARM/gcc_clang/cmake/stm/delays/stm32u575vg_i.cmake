if(${MCU_NAME} MATCHES "^STM32U575VG$|^STM32U575VI$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
