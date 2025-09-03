if(${MCU_NAME} MATCHES "^ATSAM4SA16BA$|^ATSAM4SA16BB$|^ATSAM4SA16CA$|^ATSAM4SA16CB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
