if(${MCU_NAME} MATCHES "^MINI54FHC$|^MINI54LAN$|^MINI54QDE$|^MINI54TAN$|^MINI54ZAN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
