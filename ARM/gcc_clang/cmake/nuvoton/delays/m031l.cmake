if(${MCU_NAME} MATCHES "^M031LC2AE$|^M031LD2AE$|^M031LE3AE$|^M031LG6AE$|^M031LG8AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
