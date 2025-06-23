if(${MCU_NAME} MATCHES "^M030GGC1AE$|^M030GGD1AE$|^M030GTC1AE$|^M030GTD1AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
