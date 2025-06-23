if(${MCU_NAME} MATCHES "^M031EB0AE$|^M031EC1AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
