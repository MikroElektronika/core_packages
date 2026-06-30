if(${MCU_NAME} MATCHES "^TMPM4L1FWUG$|^TMPM4L2FWDUG$|^TMPM4L4FYAUG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
