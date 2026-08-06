if(${MCU_NAME} MATCHES "^TMPM3H6FSDFG$|^TMPM3H6FSFG$|^TMPM3H6FUDFG$|^TMPM3H6FUFG$|^TMPM3H6FWDFG$|^TMPM3H6FWFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
