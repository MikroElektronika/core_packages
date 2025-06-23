if(${MCU_NAME} MATCHES "^M032LC2AE$|^M032LD2AE$|^M032LE3AE$|^M032LG6AE$|^M032LG8AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
