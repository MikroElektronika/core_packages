if(${MCU_NAME} MATCHES "^A31M223CL2N$|^A31M223CLN$|^A31M223GR2N$|^A31M223KN2N$|^A31M223KNN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
