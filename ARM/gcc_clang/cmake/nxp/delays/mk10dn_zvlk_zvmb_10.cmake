if(${MCU_NAME} MATCHES "^MK10DN512ZVLK10$|^MK10DN512ZVMB10$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
