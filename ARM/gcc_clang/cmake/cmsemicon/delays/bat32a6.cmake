if(${MCU_NAME} MATCHES "^BAT32A6300KC32NA$|^BAT32A6700KH48NB$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
