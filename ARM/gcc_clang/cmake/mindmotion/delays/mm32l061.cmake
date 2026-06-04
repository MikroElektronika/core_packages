if(${MCU_NAME} MATCHES "^MM32L061NT$|^MM32L061PF$|^MM32L061PT$|^MM32L061TW$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
