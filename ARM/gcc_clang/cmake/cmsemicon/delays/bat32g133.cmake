if(${MCU_NAME} MATCHES "^BAT32G133GC20NB$|^BAT32G133GC20SA$|^BAT32G133GC24NA$|^BAT32G133GC24SS$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
