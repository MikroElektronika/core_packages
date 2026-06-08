if(${MCU_NAME} MATCHES "^M471R1D6AE$|^M471SD6AE$|^M471VG7AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
