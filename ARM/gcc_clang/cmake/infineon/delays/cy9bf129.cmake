if(${MCU_NAME} MATCHES "^CY9BF129SAPMC-GK7CGE2$|^CY9BF129TABGL-GK7E1$|^CY9BF129TAPMC-GK7CGE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
