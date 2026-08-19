if(${MCU_NAME} MATCHES "^R5F566TAFDFL$|^R5F566TAFDFP$|^R5F566TAFGFL$|^R5F566TAFGFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
