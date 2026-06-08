if(${MCU_NAME} MATCHES "^M433LE8AE$|^M433SE8AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
