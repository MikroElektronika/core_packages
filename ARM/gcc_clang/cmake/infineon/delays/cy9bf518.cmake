if(${MCU_NAME} MATCHES "^CY9BF518SPMC-GK7CGE1$|^CY9BF518TBGL-GK7E1$|^CY9BF518TPMC-GK7E1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
