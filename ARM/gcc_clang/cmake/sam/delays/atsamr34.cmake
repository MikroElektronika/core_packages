if(${MCU_NAME} MATCHES "^ATSAMR34J16B$|^ATSAMR34J17B$|^ATSAMR34J18B$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
