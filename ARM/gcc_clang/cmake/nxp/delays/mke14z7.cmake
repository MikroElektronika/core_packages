if(${MCU_NAME} MATCHES "^MKE14Z128VLH7$|^MKE14Z128VLL7$|^MKE14Z256VLH7$|^MKE14Z256VLL7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
