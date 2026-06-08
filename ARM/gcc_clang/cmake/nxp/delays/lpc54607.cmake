if(${MCU_NAME} MATCHES "^LPC54607J256BD208$|^LPC54607J256ET180$|^LPC54607J512ET180$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
