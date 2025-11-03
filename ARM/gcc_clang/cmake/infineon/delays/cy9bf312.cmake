if(${MCU_NAME} MATCHES "^CY9BF312NBGL-GK9E1$|^CY9BF312NPMC-G-JNE2$|^CY9BF312NPQC-G-JNE2$|^CY9BF312RPMC-G-JNE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
