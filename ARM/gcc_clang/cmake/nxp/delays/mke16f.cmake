if(${MCU_NAME} MATCHES "^MKE16F256VLL16$|^MKE16F256VLH16$|^MKE16F512VLL16$|^MKE16F512VLH16$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
