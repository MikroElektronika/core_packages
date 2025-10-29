if(${MCU_NAME} MATCHES "^S6E2D35J0AGV2000A$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
