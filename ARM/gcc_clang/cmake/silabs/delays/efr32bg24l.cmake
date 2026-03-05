if(${MCU_NAME} MATCHES "^EFR32BG24L010F768IM40$|^EFR32BG24L210F768IM40$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
