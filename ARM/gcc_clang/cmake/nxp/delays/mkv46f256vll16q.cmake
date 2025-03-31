if(${MCU_NAME} MATCHES "^MKV46F256VLL16Q$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
