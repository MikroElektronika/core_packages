if(${MCU_NAME} MATCHES "^TMPM4KNFDDFG$|^TMPM4KNFDFG$|^TMPM4KNFWDFG$|^TMPM4KNFWFG$|^TMPM4KNFYDFG$|^TMPM4KNFYFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
