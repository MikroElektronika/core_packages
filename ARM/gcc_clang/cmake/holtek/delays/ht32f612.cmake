if(${MCU_NAME} MATCHES "^HT32F61244_48LQFP$|^HT32F61244_64LQFP$|^HT32F61245_48LQFP$|^HT32F61245_64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
