if(${MCU_NAME} MATCHES "^MKL28Z512VDC7$|^MKL28Z512VLL7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
