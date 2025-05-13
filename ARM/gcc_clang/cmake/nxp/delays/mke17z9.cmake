if(${MCU_NAME} MATCHES "^MKE17Z512VLH9$|^MKE17Z512VLL9$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
