if(${MCU_NAME} MATCHES "^MKL43Z128VLH4$|^MKL43Z128VMP4$|^MKL43Z256VMP4$|^MKL43Z256VLH4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
