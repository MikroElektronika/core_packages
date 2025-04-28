if(${MCU_NAME} MATCHES "^MKW41Z256VHT4$|^MKW41Z512CAT4$|^MKW41Z512VHT4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
