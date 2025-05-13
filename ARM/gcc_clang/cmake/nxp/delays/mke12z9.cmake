if(${MCU_NAME} MATCHES "^MKE12Z512VLH9$|^MKE12Z512VLL9$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
