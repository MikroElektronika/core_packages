if(${MCU_NAME} MATCHES "^ATSAM4S8BA$|^ATSAM4S8BB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
