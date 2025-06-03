if(${MCU_NAME} MATCHES "^ATSAMG51G18$|^ATSAMG51N18$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
