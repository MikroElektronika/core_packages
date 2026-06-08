if(${MCU_NAME} MATCHES "^MINI52LAN$|^MINI52QDE$|^MINI52TAN$|^MINI52ZAN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
