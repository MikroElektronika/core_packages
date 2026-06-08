if(${MCU_NAME} MATCHES "^MM32L362PF$|^MM32L362PS$|^MM32L362PT$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
