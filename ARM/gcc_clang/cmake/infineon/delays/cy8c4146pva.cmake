if(${MCU_NAME} MATCHES "^CY8C4146PVA-S422$|^CY8C4146PVA-S432$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
