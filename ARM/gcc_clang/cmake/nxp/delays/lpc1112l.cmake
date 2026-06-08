if(${MCU_NAME} MATCHES "^LPC1112LVFHI33_103$|^LPC1112LVFHN24_003$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
