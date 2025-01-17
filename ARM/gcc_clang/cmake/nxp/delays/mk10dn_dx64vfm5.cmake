if(${MCU_NAME} MATCHES "^MK10DN64VFM5$|^MK10DX64VFM5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


