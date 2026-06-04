if(${MCU_NAME} MATCHES "^A31L221AR$|^A31L221FR$|^A31L221FU$|^A31L222AR$|^A31L222FR$|^A31L222FU$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
