if(${MCU_NAME} MATCHES "^CY8C4045FNI-S412$|^CY8C4045FNI-T412$|^CY8C4045FNI-T442$|^CY8C4045FNI-T452$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
