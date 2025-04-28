if(${MCU_NAME} MATCHES "^MKL82Z128VLH7$|^MKL82Z128VLK7$|^MKL82Z128VLL7$|^MKL82Z128VMC7$|^MKL82Z128VMP7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
