if(${MCU_NAME} MATCHES "^CY8C4147AZE-S445$|^CY8C4147AZE-S455$|^CY8C4147AZE-S465$|^CY8C4147AZE-S475$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
