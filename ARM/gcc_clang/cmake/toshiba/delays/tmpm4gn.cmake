if(${MCU_NAME} MATCHES "^TMPM4GNF10FG$|^TMPM4GNF15FG$|^TMPM4GNF20FG$|^TMPM4GNFDFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
