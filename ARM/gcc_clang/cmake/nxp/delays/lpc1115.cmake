if(${MCU_NAME} MATCHES "^LPC1115FBD48-303$|^LPC1115FET48-303$|^LPC1115JBD48-303$|^LPC1115JET48-303$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
