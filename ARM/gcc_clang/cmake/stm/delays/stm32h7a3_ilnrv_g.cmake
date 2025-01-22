if(${MCU_NAME} MATCHES "^STM32H7A3RG$|^STM32H7A3VG$|^STM32H7A3IG$|^STM32H7A3NG$|^STM32H7A3LG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
