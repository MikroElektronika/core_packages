if(${MCU_NAME} MATCHES "^MINI54FDE$|^MINI54LDE$|^MINI54TDE$|^MINI54ZDE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
