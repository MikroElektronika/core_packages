if(${MCU_NAME} MATCHES "^CY9BF318SPMC-GK7CGE1$|^CY9BF318TBGL-GK7E1$|^CY9BF318TPMC-GK7CGFKE1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
