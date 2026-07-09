if(${MCU_NAME} MATCHES "^MAX32690$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
