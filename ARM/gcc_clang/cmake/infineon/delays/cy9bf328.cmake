if(${MCU_NAME} MATCHES "^CY9BF328SAPMC-GK7CGE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
