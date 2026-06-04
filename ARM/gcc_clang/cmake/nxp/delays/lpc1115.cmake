if(${MCU_NAME} MATCHES "^LPC1115FBD48_303$|^LPC1115FET48_303$|^LPC1115JBD48_303$|^LPC1115JET48_303$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
