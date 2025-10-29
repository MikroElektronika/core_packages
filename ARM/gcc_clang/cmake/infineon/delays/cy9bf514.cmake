if(${MCU_NAME} MATCHES "^CY9BF514NBGL-GK9E1$|^CY9BF514NPMC-G-JNE2$|^CY9BF514NPQC-G-JNE2$|^CY9BF514RPMC-G-JNE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
