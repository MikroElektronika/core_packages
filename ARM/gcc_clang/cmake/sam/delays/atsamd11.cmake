if(${MCU_NAME} MATCHES "^ATSAMD11C14A$|^ATSAMD11D14AM$|^ATSAMD11D14AS$|^ATSAMD11D14AU$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
