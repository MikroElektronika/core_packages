if(${MCU_NAME} MATCHES "^MKL17Z64VFM4$|^MKL17Z64VFT4$|^MKL17Z64VLH4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
