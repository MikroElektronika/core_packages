if(${MCU_NAME} MATCHES "^MKS22FN128VLL12$|^MKS22FN128VLH12$|^MKS22FN128VFT12$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


