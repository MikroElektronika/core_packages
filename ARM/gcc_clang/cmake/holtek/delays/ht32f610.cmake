if(${MCU_NAME} MATCHES "^HT32F61030_36QFN$|^HT32F61041_46QFN$|^HT32F61049_48LQFP$|^HT32F61052_64LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
