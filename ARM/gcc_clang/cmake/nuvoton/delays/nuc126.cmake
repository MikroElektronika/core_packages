if(${MCU_NAME} MATCHES "^NUC126LE4AE$|^NUC126LG4AE$|^NUC126NE4AE$|^NUC126SE4AE$|^NUC126SG4AE$|^NUC126VG4AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
