if(${MCU_NAME} MATCHES "^MKW31Z256VHT4$|^MKW31Z512CAT4$|^MKW31Z512VHT4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
