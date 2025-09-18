if(${MCU_NAME} MATCHES "^CY8C4127LDS-S443$|^CY8C4127LDS-S453$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
