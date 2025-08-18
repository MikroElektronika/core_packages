if(${MCU_NAME} MATCHES "^XMC1401-F064F0064$|^XMC1401-F064F0128$|^XMC1401-Q048F0064$|^XMC1401-Q048F0128$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
