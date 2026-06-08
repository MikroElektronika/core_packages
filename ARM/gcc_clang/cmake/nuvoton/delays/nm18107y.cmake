if(${MCU_NAME} MATCHES "^NM18107Y$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
