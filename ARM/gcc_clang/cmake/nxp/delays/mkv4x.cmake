if(${MCU_NAME} MATCHES "^MKV4[246]F[126].+$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
