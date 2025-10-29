if(${MCU_NAME} MATCHES "^CY9BF128SAPMC-GK7CGE2$|^CY9BF128TABGL-GK7E1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
