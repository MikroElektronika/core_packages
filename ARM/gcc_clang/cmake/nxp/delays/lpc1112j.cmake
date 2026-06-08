if(${MCU_NAME} MATCHES "^LPC1112JHI33_203$|^LPC1112JHN33_103$|^LPC1112JHN33_203$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
