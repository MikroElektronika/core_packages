if(${MCU_NAME} MATCHES "^M254SD3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
