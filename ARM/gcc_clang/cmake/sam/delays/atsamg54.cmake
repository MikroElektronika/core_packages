if(${MCU_NAME} MATCHES "^ATSAMG54G19B$|^ATSAMG54N19B$|^ATSAMG54J19B$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
