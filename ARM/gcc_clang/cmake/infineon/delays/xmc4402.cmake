if(${MCU_NAME} MATCHES "^XMC4402-F100F256$|^XMC4402-F100K256$|^XMC4402-F64F256$|^XMC4402-F64K256$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
