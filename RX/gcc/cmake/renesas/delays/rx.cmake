if(${MCU_NAME} MATCHES "^R5F526TFCDFP$")
    # # TODO - implement correct values after testing
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
