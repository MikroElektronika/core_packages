if(${MCU_NAME} MATCHES "^CY8C4148AXI-S445$|^CY8C4148AXI-S455$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
