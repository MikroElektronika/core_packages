if(${MCU_NAME} MATCHES "^HT50L3200U-64LQFP$|^HT50L3200W-48LQFP$|^HT50L3200X-48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
