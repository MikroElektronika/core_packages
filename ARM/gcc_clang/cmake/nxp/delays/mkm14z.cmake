if(${MCU_NAME} MATCHES "^MKM14Z128ACHH5$|^MKM14Z64ACHH5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
