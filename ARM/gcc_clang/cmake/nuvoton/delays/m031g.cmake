if(${MCU_NAME} MATCHES "^M031GGC2AE$|^M031GGD2AE$|^M031GTC2AE$|^M031GTD2AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
