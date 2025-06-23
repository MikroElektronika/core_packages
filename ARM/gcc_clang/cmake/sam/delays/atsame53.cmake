if(${MCU_NAME} MATCHES "^ATSAME53J18A$|^ATSAME53J19A$|^ATSAME53J20A$|^ATSAME53N19A$|^ATSAME53N20A$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
