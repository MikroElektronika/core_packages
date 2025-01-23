if(${MCU_NAME} MATCHES "^MK20DN32VFT5$|^MK20DN32VLF5$|^MK20DX32VFT5$|^MK20DX32VLF5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


