if(${MCU_NAME} MATCHES "^CY8C4126LWE-HVS005$|^CY8C4126LWE-HVS015$|^CY8C4126LWE-HVS105$|^CY8C4126LWE-HVS115$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
