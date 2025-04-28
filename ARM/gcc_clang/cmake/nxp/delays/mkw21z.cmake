if(${MCU_NAME} MATCHES "^MKW21Z256VHT4$|^MKW21Z512VHT4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
