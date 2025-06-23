if(${MCU_NAME} MATCHES "^MINI57EDE$|^MINI57FDE$|^MINI57TDE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
