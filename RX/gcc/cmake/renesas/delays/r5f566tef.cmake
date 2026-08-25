if(${MCU_NAME} MATCHES "^R5F566TEFDFL$|^R5F566TEFDFP$|^R5F566TEFGFL$|^R5F566TEFGFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/3)")
endif()
