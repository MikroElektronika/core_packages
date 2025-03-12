if(${MCU_NAME} MATCHES "^MK10DX64VLH7$|^MK10DX128VLH7$|^MK10DX256VLH7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
