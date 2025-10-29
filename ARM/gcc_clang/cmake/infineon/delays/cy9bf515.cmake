if(${MCU_NAME} MATCHES "^CY9BF515NBGL-GK9E1$|^CY9BF515NPMC-G-JNE2$|^CY9BF515NPQC-G-JNE2$|^CY9BF515RPMC-G-JNE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
