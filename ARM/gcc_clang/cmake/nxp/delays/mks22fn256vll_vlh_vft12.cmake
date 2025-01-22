if(${MCU_NAME} MATCHES "^MKS22FN256VLL12$|^MKS22FN256VLH12$|^MKS22FN256VFT12$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


