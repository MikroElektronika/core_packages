if(${MCU_NAME} MATCHES "^MK10DX32VFT5$|^MK10DX64VFT5$|^MK10DX128VFT5$|^MK10DX32VLF5$|^MK10DX64VLF5$|^MK10DX128VLF5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
