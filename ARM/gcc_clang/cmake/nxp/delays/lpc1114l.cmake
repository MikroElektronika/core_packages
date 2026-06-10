if(${MCU_NAME} MATCHES "^LPC1114LVFHI33-303$|^LPC1114LVFHN24-103$|^LPC1114LVFHN24-303$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
