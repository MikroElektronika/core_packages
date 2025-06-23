if(${MCU_NAME} MATCHES "^ATSAMR30E18A$|^ATSAMR30G18A$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
