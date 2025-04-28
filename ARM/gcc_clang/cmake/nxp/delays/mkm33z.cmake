if(${MCU_NAME} MATCHES "^MKM33Z128ACLH5$|^MKM33Z128ACLL5$|^MKM33Z64ACLH5$|^MKM33Z64ACLL5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
