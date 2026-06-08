if(${MCU_NAME} MATCHES "^LPC4367JBD208$|^LPC4367JET100$|^LPC4367JET256$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
