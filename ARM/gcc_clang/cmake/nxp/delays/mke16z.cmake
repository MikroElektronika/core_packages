if(${MCU_NAME} MATCHES "^MKE16Z32VLD4$|^MKE16Z32VLF4$|^MKE16Z64VLD4$|^MKE16Z64VLF4$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
