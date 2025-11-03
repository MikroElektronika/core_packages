if(${MCU_NAME} MATCHES "^CY9BF112NBGL-GK9E1$|^CY9BF112NPMC-G-JNE2$|^CY9BF112NPQC-G-JNE2$|^CY9BF112RPMC-G-JNE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
