if(${MCU_NAME} MATCHES "^HT32L62141_64LQFP$|^HT32L64041_64LQFP$|^HT32L64141_64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
