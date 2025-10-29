if(${MCU_NAME} MATCHES "^CY9BF467MPMC1-G-JNE2$|^CY9BF467NPQC-G-JNE2$|^CY9BF467RBGL-GE1$|^CY9BF467RBGL-GK7E1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
