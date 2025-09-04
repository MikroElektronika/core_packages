if(${MCU_NAME} MATCHES "^PIC32CZ2051MC70064$|^PIC32CZ2051MC70100$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
