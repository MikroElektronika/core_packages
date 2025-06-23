if(${MCU_NAME} MATCHES "^ATSAME54N19A$|^ATSAME54N20A$|^ATSAME54P19A$|^ATSAME54P20A$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
