if(${MCU_NAME} MATCHES "^MK10DN128VMP5$|^MK10DX128VMP5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


