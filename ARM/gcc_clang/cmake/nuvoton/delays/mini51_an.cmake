if(${MCU_NAME} MATCHES "^MINI51LAN$|^MINI51QDE$|^MINI51TAN$|^MINI51ZAN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
