if(${MCU_NAME} MATCHES "^NM1530LE3AE$|^NM1530VD3AE$|^NM1530VE3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
