if(${MCU_NAME} MATCHES "^LPC54608J512BD208$|^LPC54608J512ET180$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
