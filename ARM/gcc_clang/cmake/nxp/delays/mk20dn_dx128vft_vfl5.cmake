if(${MCU_NAME} MATCHES "^MK20DN128VFT5$|^MK20DN128VLF5$|^MK20DX128VFT5$|^MK20DX128VLF5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


