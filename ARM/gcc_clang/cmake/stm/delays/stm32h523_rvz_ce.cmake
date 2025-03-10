if(${MCU_NAME} MATCHES "^STM32H523ZC$|^STM32H523RE$|^STM32H523VE$|^STM32H523ZE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
