if(${MCU_NAME} MATCHES "^CY8C4024FNI-S402$|^CY8C4024FNI-S412$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
