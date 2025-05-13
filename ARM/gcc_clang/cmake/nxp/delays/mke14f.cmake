if(${MCU_NAME} MATCHES "^MKE14F256VLL16$|^MKE14F256VLH16$|^MKE14F512VLL16$|^MKE14F512VLH16$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
