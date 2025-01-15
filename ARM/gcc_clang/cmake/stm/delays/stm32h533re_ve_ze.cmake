if(${MCU_NAME} MATCHES "^STM32H533RE$|^STM32H533VE$|^STM32H533ZE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
