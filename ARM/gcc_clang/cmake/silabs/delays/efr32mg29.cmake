if(${MCU_NAME} MATCHES "^EFR32MG29B140F1024IM40$|^EFR32MG29B230F1024CM40$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
