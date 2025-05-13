if(${MCU_NAME} MATCHES "^MKE15Z128VLH7$|^MKE15Z128VLL7$|^MKE15Z256VLH7$|^MKE15Z256VLL7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
