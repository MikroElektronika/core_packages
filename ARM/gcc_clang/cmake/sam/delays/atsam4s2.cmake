if(${MCU_NAME} MATCHES "^ATSAM4S2AA$|^ATSAM4S2AB$|^ATSAM4S2BA$|^ATSAM4S2BB$|^ATSAM4S2CA$|^ATSAM4S2CB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
