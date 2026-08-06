if(${MCU_NAME} MATCHES "^TMPM390FWFG$|^TMPM395FWAXBG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
