if(${MCU_NAME} MATCHES "^MM32L062NT$|^MM32L062PF$|^MM32L062PT$|^MM32L062TW$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
