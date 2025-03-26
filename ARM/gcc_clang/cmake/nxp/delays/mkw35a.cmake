if(${MCU_NAME} MATCHES "^MKW35A512VFP4$|^MKW35A512VFT4$|^MKW35Z512VHT4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
