if(${MCU_NAME} MATCHES "^MSPM0L2227$|^MSPM0L2227-Q1$|^MSPM0L2228$|^MSPM0L2228-Q1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
