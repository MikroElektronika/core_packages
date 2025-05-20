if(${MCU_NAME} MATCHES "^M031BTYD2AN$|^M031BTYE3AN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
