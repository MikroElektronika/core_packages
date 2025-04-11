if(${MCU_NAME} MATCHES "^MKL34Z64VLH4$|^MKL34Z64VLL4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
