if(${MCU_NAME} MATCHES "^MKW36A512VHT4$|^MKW36A512VFP4$|^MKW36A512VFT4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
