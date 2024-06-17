if(${MCU_NAME} MATCHES "^ATSAMG55G19A$|^ATSAMG55G19B$|^ATSAMG55J19A$|^ATSAMG55J19B$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
