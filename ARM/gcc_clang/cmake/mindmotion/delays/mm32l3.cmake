if(${MCU_NAME} MATCHES "^MM32L362NT$|^MM32L373NT$|^MM32L373PF$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
