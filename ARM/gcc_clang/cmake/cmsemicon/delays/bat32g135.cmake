if(${MCU_NAME} MATCHES "^BAT32G135_S$|^BAT32G135GE32FP$|^BAT32G135GE40NB$|^BAT32G135GE48FA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
