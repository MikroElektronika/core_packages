if(${MCU_NAME} MATCHES "^XMC1402-T038X0032$|^XMC1402-T038X0064$|^XMC1402-T038X0128$|^XMC1402-T038X0200$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
