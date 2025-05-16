if(${MCU_NAME} MATCHES "^ATSAMR35J16B$|^ATSAMR35J17B$|^ATSAMR35J18B$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
