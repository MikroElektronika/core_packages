if(${MCU_NAME} MATCHES "^M032SE3AE$|^M032SG6AE$|^M032SG8AE$|^M032SIAAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
