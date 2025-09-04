if(${MCU_NAME} MATCHES "^PIC32CZ2051CA70064$|^PIC32CZ2051CA70100$|^PIC32CZ2051CA70144$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
