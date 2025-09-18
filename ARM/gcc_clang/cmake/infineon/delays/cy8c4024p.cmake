if(${MCU_NAME} MATCHES "^CY8C4024PVA-S411$|^CY8C4024PVA-S412$|^CY8C4024PVS-S411$|^CY8C4024PVS-S412$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
