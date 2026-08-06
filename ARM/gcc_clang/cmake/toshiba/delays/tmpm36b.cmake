if(${MCU_NAME} MATCHES "^TMPM36BF10FG$|^TMPM36BFYFG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
