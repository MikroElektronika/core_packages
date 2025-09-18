if(${MCU_NAME} MATCHES "^CY8C4126LDS-S453$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
