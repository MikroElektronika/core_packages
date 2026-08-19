if(${MCU_NAME} MATCHES "^R5F566TABDFL$|^R5F566TABDFP$|^R5F566TABGFL$|^R5F566TABGFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
