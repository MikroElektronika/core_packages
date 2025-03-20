if(${MCU_NAME} MATCHES "^MK30DX64VLK7$|^MK30DX128VLK7$|^MK30DX256VLK7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
