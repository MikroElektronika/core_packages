if(${MCU_NAME} MATCHES "^CY8C4125LDE-HVS004$|^CY8C4125LDE-HVS014$|^CY8C4125LDE-HVS104$|^CY8C4125LDE-HVS114$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
