if(${MCU_NAME} MATCHES "^MKL27Z64VFM4$|^MKL27Z64VLH4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
