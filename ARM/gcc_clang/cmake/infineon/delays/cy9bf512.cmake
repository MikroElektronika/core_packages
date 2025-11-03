if(${MCU_NAME} MATCHES "^CY9BF512NBGL-GK9E1$|^CY9BF512NPMC-G-JNE2$|^CY9BF512NPQC-G-JNE2$|^CY9BF512RPMC-G-JNE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
