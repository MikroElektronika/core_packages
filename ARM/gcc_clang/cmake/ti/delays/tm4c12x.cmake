if(${MCU_NAME} MATCHES "^TM4C12.+$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/8)")
endif()
