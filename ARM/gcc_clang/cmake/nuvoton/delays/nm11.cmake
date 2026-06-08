if(${MCU_NAME} MATCHES "^NM1100FBAE$|^NM1100XBAE$|^NM1120EC1AE$|^NM1120FC1AE$|^NM1120XC1AE$|^NM1120ZC1AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
