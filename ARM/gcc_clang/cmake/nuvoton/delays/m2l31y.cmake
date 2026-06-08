if(${MCU_NAME} MATCHES "^M2L31YD4AE$|^M2L31YE4AE$|^M2L31YG4AE$|^M2L31YGDAE$|^M2L31YIDAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
