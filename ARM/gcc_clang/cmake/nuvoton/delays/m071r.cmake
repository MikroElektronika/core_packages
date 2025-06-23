if(${MCU_NAME} MATCHES "^M071R1E3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
