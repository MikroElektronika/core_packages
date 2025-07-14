if(${MCU_NAME} MATCHES "^NUC1262LE4AE$|^NUC1262NE4AE$|^NUC1262SE4AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
