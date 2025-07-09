if(${MCU_NAME} MATCHES "^R7FA4W1AD2CNG$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
