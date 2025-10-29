if(${MCU_NAME} MATCHES "^CY9AF115MAPMC-GNE2$|^CY9AF115NABGL-GK9E1$|^CY9AF115NAPMC-GNE2$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
