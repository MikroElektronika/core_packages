if(${MCU_NAME} MATCHES "^BAT32A279KM100FA$|^BAT32A279KM64FB$|^BAT32A279KM80FA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
