if(${MCU_NAME} MATCHES "^XMC4300-F100F256$|^XMC4300-F100K256$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
