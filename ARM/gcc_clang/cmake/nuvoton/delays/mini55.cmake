if(${MCU_NAME} MATCHES "^MINI55LDE$|^MINI55TDE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
