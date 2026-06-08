if(${MCU_NAME} MATCHES "^M030FD2AE$|^M030GGC0AE$|^M030GTC0AE$|^M030LD2AE$|^M030TD2AE$|^M031GGC1AE$|^M031GTC1AE$|^M031TE3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
