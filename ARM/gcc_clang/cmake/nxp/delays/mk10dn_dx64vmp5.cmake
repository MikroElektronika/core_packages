if(${MCU_NAME} MATCHES "^MK10DN64VMP5$|^MK10DX64VMP5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


