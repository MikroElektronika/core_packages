if(${MCU_NAME} MATCHES "^M463K2GCAC$|^M463L2GCAC$|^M463S2GCAC$|^M463VGCAE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
