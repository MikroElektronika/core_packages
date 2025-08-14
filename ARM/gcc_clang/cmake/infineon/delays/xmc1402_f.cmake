if(${MCU_NAME} MATCHES "^XMC1402-F064X0064$|^XMC1402-F064X0128$|^XMC1402-F064X0200$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
