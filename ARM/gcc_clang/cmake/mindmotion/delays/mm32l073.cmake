if(${MCU_NAME} MATCHES "^MM32L073NT$|^MM32L073PF$|^MM32L073PT$|^MM32L073TW$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
