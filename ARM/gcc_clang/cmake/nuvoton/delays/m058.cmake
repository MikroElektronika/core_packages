if(${MCU_NAME} MATCHES "^M058LDE$|^M058LDN$|^M058SFAN$|^M058SLAN$|^M058SSAN$|^M058SZAN$|^M058ZDE$|^M058ZDN$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
