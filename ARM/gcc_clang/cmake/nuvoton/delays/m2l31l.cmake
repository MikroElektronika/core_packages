if(${MCU_NAME} MATCHES "^M2L31LD4AE$|^M2L31LE4AE$|^M2L31LG4AE$|^M2L31LGDAE$|^M2L31LIDAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
