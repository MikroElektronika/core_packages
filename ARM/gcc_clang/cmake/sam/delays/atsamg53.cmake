if(${MCU_NAME} MATCHES "^ATSAMG53G19A$|^ATSAMG53G19B$|^ATSAMG53N19A$|^ATSAMG53N19B$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
