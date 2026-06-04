if(${MCU_NAME} MATCHES "^HC32F120F6TA$|^HC32F120F8TA$|^HC32F120H6TA$|^HC32F120H8TA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
