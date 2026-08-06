if(${MCU_NAME} MATCHES "^TMPM471F10$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
