if(${MCU_NAME} MATCHES "^MK27FN2M0AVMI15$|^MK27FN2M0VMI15$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
