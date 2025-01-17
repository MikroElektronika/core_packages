if(${MCU_NAME} MATCHES "^MK10DN128VLF5$|^MK10DX128VLF5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


