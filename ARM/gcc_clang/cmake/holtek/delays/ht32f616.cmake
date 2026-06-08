if(${MCU_NAME} MATCHES "^HT32F61630_48LQFP$|^HT32F61641_48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
