if(${MCU_NAME} MATCHES "^LPC1101LVUK$|^LPC1102LVUK$|^LPC1102UK$|^LPC1104UK$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
