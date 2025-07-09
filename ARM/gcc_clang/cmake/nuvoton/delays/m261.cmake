if(${MCU_NAME} MATCHES "^M261KIAAE$|^M261SIAAE$|^M261ZIAAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
