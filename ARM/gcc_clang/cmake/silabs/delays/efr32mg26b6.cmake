if(${MCU_NAME} MATCHES "^EFR32MG26B610F3200IM48$|^EFR32MG26B611F2048IM48$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
