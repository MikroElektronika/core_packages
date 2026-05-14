if(${MCU_NAME} MATCHES "^AT32WB415CCU7_7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
