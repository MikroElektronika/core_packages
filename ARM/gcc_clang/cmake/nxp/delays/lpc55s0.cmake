if(${MCU_NAME} MATCHES "^LPC55S04JBD64$|^LPC55S04JHI48$|^LPC55S06JBD64$|^LPC55S06JHI48$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
