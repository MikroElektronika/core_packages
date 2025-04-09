if(${MCU_NAME} MATCHES "^MK21DN512AVMC5$|^MK21DN512VLK5$|^MK21DN512VMC5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
