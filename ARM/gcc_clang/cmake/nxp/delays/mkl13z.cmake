if(${MCU_NAME} MATCHES "^MKL13Z32VMP4$|^MKL13Z32VLK4$|^MKL13Z32VLH4$|^MKL13Z32VFT4$|^MKL13Z32VFM4$|^MKL13Z64VLH4$|^MKL13Z64VFT4$|^MKL13Z64VMP4$|^MKL13Z64VFM4$|^MKL13Z64VLK4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
