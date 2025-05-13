if(${MCU_NAME} MATCHES "^MKE13Z512VLH9$|^MKE13Z512VLL9$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
