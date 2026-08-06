if(${MCU_NAME} MATCHES "^TMPM4KQFDFG$|^TMPM4KQFWFG$|^TMPM4KQFYFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
