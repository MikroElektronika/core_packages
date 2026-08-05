if(${MCU_NAME} MATCHES "^TMPM4KPFDDFG$|^TMPM4KPFWDFG$|^TMPM4KPFYDFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
