if(${MCU_NAME} MATCHES "^STM32H563MI$|^STM32H563RG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/17)")
endif()
