if(${MCU_NAME} MATCHES "^NANO102LB1AN$|^NANO102LC2AN$|^NANO102SC2AN$|^NANO102ZB1AN$|^NANO102ZC2AN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
