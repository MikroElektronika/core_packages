if(${MCU_NAME} MATCHES "^ATSAM4S4AA$|^ATSAM4S4AB$|^ATSAM4S4BA$|^ATSAM4S4BB$|^ATSAM4S4CA$|^ATSAM4S4CB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
