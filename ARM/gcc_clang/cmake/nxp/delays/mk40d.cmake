if(${MCU_NAME} MATCHES "^MK40DN512VLK10$|^MK40DN512VLL10$|^MK40DN512VMC10$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
