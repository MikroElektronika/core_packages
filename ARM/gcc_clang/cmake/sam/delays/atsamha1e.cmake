if(${MCU_NAME} MATCHES "^ATSAMHA1E14AB$|^ATSAMHA1E15AB$|^ATSAMHA1E16AB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
