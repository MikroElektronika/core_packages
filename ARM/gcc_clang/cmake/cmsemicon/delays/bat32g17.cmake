if(${MCU_NAME} MATCHES "^BAT32G179GM100FA$|^BAT32G179GM64FB$|^BAT32G179GM80FA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
