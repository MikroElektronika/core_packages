if(${MCU_NAME} MATCHES "^CY8C4148AXQ-S445$|^CY8C4148AXQ-S455$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
