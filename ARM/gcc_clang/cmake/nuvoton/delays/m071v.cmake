if(${MCU_NAME} MATCHES "^M071VG4AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
