if(${MCU_NAME} MATCHES "^MSPM0L1105$|^MSPM0L1106$|^MSPM0L1117$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
