if(${MCU_NAME} MATCHES "^ATSAM4N16B$|^ATSAM4N16C$|^ATSAM4N8A$|^ATSAM4N8B$|^ATSAM4N8C$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
