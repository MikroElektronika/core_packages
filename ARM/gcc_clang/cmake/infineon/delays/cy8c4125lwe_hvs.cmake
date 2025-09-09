if(${MCU_NAME} MATCHES "^CY8C4125LWE-HVS005$|^CY8C4125LWE-HVS015$|^CY8C4125LWE-HVS105$|^CY8C4125LWE-HVS115$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
