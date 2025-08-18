if(${MCU_NAME} MATCHES "^XMC4700-E196F1536$|^XMC4700-E196F2048$|^XMC4700-E196K1536$|^XMC4700-E196K2048$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
