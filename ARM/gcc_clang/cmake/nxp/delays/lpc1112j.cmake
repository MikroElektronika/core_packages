if(${MCU_NAME} MATCHES "^LPC1112JHI33-203$|^LPC1112JHN33-103$|^LPC1112JHN33-203$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
