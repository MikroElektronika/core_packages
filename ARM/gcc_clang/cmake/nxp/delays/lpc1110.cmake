if(${MCU_NAME} MATCHES "^LPC1110FD20$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
