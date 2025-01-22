if(${MCU_NAME} MATCHES "^MKS20FN256VLL12$|^MKS20FN256VLH12$|^MKS20FN256VFT12$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


