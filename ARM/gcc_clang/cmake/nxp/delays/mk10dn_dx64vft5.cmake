if(${MCU_NAME} MATCHES "^MK10DN64VFT5$|^MK10DX64VFT5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


