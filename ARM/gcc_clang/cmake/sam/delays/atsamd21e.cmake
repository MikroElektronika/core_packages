if(${MCU_NAME} MATCHES "^ATSAMD21E15BU$|^ATSAMD21E15CU$|^ATSAMD21E16BU$|^ATSAMD21E16CU$|^ATSAMD21E17DU$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
