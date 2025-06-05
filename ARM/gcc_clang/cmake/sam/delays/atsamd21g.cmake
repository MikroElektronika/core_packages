if(${MCU_NAME} MATCHES "^ATSAMD21G15L$|^ATSAMD21G17AU$|^ATSAMD21G18AU$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
