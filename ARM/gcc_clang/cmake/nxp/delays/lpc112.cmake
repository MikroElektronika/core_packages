if(${MCU_NAME} MATCHES "^LPC1124JBD48_303$|^LPC1125JBD48_303$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
