if(${MCU_NAME} MATCHES "^MK52DN512CLQ10$|^MK52DN512CMD10$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
