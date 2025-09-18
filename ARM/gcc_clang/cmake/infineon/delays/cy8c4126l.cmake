if(${MCU_NAME} MATCHES "^CY8C4126LCE-HVS003$|^CY8C4126LCE-HVS013$|^CY8C4126LCE-HVS103$|^CY8C4126LCE-HVS113$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
