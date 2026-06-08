if(${MCU_NAME} MATCHES "^LPC1114LVFHI33_303$|^LPC1114LVFHN24_103$|^LPC1114LVFHN24_303$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
