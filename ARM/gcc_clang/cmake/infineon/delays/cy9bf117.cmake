if(${MCU_NAME} MATCHES "^CY9BF117TBGL-GK7E1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
