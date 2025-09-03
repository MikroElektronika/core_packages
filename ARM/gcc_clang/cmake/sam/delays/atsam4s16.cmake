if(${MCU_NAME} MATCHES "^ATSAM4S16BA$|^ATSAM4S16BB$|^ATSAM4S16CA$|^ATSAM4S16CB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
