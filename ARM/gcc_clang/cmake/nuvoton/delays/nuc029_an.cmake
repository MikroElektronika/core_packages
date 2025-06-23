if(${MCU_NAME} MATCHES "^NUC029LAN$|^NUC029NAN$|^NUC029TAN$|^NUC029ZAN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
