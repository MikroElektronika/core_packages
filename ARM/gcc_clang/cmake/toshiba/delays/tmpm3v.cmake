if(${MCU_NAME} MATCHES "^TMPM3V4FSEFG$|^TMPM3V4FSUG$|^TMPM3V4FWEFG$|^TMPM3V4FWUG$|^TMPM3V6FWDFG$|^TMPM3V6FWFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
