if(${MCU_NAME} MATCHES "^TMPM344F10XBG$|^TMPM344FDXBG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
