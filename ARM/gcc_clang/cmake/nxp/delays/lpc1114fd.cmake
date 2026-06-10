if(${MCU_NAME} MATCHES "^LPC1114FDH28-102$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
