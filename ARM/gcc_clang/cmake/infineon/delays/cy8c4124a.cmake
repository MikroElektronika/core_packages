if(${MCU_NAME} MATCHES "^CY8C4124AZI-S413$|^CY8C4124AZI-S433$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
