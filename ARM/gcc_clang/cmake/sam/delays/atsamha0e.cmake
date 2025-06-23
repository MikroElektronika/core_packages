if(${MCU_NAME} MATCHES "^ATSAMHA0E14AB$|^ATSAMHA0E15AB$|^ATSAMHA0E16AB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
