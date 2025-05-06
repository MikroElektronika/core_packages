if(${MCU_NAME} MATCHES "^K32L2A31VLH1A$|^K32L2A31VLL1A$|^K32L2A41VLH1A$|^K32L2A41VLL1A$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
