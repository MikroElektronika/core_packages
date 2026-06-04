if(${MCU_NAME} MATCHES "^A34G430RL2N$|^A34G430VL2N$|^A34G430YL2N$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
