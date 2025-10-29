if(${MCU_NAME} MATCHES "^CY9BF567MPMC1-G-JNE2$|^CY9BF567NPQC-G-JNE2$|^CY9BF567RBGL-GE1$|^CY9BF567RBGL-GK7E1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
