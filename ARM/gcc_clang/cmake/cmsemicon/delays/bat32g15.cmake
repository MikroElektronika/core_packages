if(${MCU_NAME} MATCHES "^BAT32G157_S$|^BAT32G157GK48FA$|^BAT32G157GK48NB$|^BAT32G157GK64FB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
