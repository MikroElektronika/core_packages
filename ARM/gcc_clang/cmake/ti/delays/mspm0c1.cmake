if(${MCU_NAME} MATCHES "^MSPM0C1103$|^MSPM0C1103-Q1$|^MSPM0C1104$|^MSPM0C1104-Q1$|^MSPM0C1106$|^MSPM0C1106-Q1$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
