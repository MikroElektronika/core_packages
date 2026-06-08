if(${MCU_NAME} MATCHES "^MM32L072NT$|^MM32L072PF$|^MM32L072PT$|^MM32L072TW$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
