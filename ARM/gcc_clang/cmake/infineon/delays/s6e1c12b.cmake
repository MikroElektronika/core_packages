if(${MCU_NAME} MATCHES "^S6E1C12B0AGN20000$|^S6E1C12B0AGP20000$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
