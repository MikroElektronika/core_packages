if(${MCU_NAME} MATCHES "^A34L716JYN$|^A34L716RLN$|^A34L716VLN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
