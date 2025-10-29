if(${MCU_NAME} MATCHES "^CY9BF314NBGL-GK9E1$|^CY9BF314NPMC-G-JNE2$|^CY9BF314NPQC-G-JNE2$|^CY9BF314RPMC-G-JNE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
