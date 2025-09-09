if(${MCU_NAME} MATCHES "^CY8C4147AZS-S445$|^CY8C4147AZS-S455$|^CY8C4147AZS-S465$|^CY8C4147AZS-S475$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
