if(${MCU_NAME} MATCHES "^R7KA8M2ADECHC$|^R7KA8M2AFECHC$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/2)")
endif()
