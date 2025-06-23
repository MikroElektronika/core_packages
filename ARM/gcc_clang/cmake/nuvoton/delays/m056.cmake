if(${MCU_NAME} MATCHES "^M0564LE4AE$|^M0564LG4AE$|^M0564SE4AE$|^M0564SG4AE$|^M0564VG4AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
