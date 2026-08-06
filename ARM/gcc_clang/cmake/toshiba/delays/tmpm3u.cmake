if(${MCU_NAME} MATCHES "^TMPM3U0FSDMG$|^TMPM3U6FWDFG$|^TMPM3U6FWFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
