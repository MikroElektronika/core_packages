if(${MCU_NAME} MATCHES "^CY8C4045PVA-S411$|^CY8C4045PVA-S412$|^CY8C4045PVS-S411$|^CY8C4045PVS-S412$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
