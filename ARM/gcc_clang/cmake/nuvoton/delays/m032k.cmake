if(${MCU_NAME} MATCHES "^M032KG6AE$|^M032KG8AE$|^M032KIAAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
