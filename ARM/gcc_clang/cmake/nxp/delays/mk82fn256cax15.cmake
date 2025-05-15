if(${MCU_NAME} MATCHES "^MK82FN256CAX15$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
