if(${MCU_NAME} MATCHES "^M253LD3AE$|^M253LE3AE$|^M253ZE3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
