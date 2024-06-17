if(${MCU_NAME} MATCHES "^SAMG51G18A$|^SAMG51N18A$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
