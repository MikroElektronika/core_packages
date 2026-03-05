if(${MCU_NAME} MATCHES "^EFR32MG24A610F1536IM40$|^EFR32MG24A620F1536IM40$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
