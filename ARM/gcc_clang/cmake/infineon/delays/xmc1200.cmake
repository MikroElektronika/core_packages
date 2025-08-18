if(${MCU_NAME} MATCHES "^XMC1200-T038F0200$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
