if(${MCU_NAME} MATCHES "^ATSAM4S8CA$|^ATSAM4S8CB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
