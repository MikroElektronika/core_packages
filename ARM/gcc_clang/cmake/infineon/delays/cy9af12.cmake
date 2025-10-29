if(${MCU_NAME} MATCHES "^CY9AF121KPMC-G-JNE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
