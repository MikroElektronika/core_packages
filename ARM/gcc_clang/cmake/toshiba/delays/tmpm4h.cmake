if(${MCU_NAME} MATCHES "^TMPM4H1FYUG$|^TMPM4H2FYDUG$|^TMPM4H4FYUG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
