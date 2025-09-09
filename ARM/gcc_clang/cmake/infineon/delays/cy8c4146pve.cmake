if(${MCU_NAME} MATCHES "^CY8C4146PVE-S422$|^CY8C4146PVE-S432$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
