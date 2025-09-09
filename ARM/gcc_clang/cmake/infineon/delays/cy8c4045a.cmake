if(${MCU_NAME} MATCHES "^CY8C4045AXI-S412$|^CY8C4045AZI-S413$|^CY8C4045AZQ-S413$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
