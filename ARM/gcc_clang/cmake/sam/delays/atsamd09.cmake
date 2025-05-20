if(${MCU_NAME} MATCHES "^ATSAMD09C13A$|^ATSAMD09D14A$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
