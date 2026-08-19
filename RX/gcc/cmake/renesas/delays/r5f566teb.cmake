if(${MCU_NAME} MATCHES "^R5F566TEBDFL$|^R5F566TEBDFP$|^R5F566TEBGFL$|^R5F566TEBGFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
