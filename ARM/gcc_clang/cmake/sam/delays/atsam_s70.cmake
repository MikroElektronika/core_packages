if(${MCU_NAME} MATCHES "^ATSAMS70J19A$|^ATSAMS70J19B$|^ATSAMS70J20A$|^ATSAMS70J20B$|^ATSAMS70J21A$|^ATSAMS70J21B$|^ATSAMS70N19A$|^ATSAMS70N19B$|^ATSAMS70N20A$|^ATSAMS70N20B$|^ATSAMS70N21A$|^ATSAMS70N21B$|^ATSAMS70Q19A$|^ATSAMS70Q19B$|^ATSAMS70Q20A$|^ATSAMS70Q20B$|^ATSAMS70Q21A$|^ATSAMS70Q21B$")
    list(APPEND local_list_macros "getClockValue(_clock) ((_clock*2)/1000UL/3)")
endif()
