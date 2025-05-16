if(${MCU_NAME} MATCHES "^MKE18F256VLL16$|^MKE18F256VLH16$|^MKE18F512VLL16$|^MKE18F512VLH16$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
