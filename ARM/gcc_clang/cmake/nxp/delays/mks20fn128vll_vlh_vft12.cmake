if(${MCU_NAME} MATCHES "^MKS20FN128VLL12$|^MKS20FN128VLH12$|^MKS20FN128VFT12$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


