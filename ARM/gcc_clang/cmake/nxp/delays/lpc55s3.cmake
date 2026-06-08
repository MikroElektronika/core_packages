if(${MCU_NAME} MATCHES "^LPC55S36JBD100$|^LPC55S36JHI48$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
