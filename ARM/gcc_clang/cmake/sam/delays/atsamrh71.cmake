if(${MCU_NAME} MATCHES "^ATSAMRH71F20B$|^ATSAMRH71F20C$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
