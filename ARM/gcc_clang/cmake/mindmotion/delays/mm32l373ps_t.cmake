if(${MCU_NAME} MATCHES "^MM32L373PS$|^MM32L373PT$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
