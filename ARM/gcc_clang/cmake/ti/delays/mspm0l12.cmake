if(${MCU_NAME} MATCHES "^MSPM0L1227$|^MSPM0L1227-Q1$|^MSPM0L1228$|^MSPM0L1228-Q1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
