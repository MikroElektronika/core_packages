if(${MCU_NAME} MATCHES "^STM32U535NE$|^STM32U535RB$|^STM32U535RC$|^STM32U535RE$|^STM32U535VC$|^STM32U535VE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000/17)")
endif()
