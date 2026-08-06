if(${MCU_NAME} MATCHES "^TMPM4G6F10FG$|^TMPM4G6FDFG$|^TMPM4G6FEFG$|^TMPM4G7F10FG$|^TMPM4G7FDFG$|^TMPM4G7FEFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
