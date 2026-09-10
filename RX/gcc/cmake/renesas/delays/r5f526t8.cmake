if(${MCU_NAME} MATCHES "^R5F526T8ADFL$|^R5F526T8ADFM$|^R5F526T8AGFL$|^R5F526T8AGFM$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/3)")
endif()
