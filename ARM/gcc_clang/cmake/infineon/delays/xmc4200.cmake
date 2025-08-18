if(${MCU_NAME} MATCHES "^XMC4200-F64F256$|^XMC4200-F64K256$|^XMC4200-Q48F256$|^XMC4200-Q48K256$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
