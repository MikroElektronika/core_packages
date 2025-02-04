if(${MCU_NAME} MATCHES "^STM32U595RJ$|^STM32U595VI$|^STM32U595VJ$|^STM32U595ZI$|^STM32U595ZJ$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
