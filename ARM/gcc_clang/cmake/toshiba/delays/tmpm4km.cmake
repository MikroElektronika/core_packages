if(${MCU_NAME} MATCHES "^TMPM4KMFDDFG$|^TMPM4KMFDFG$|^TMPM4KMFWDFG$|^TMPM4KMFWFG$|^TMPM4KMFYDFG$|^TMPM4KMFYFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
