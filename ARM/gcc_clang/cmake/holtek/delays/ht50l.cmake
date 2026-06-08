if(${MCU_NAME} MATCHES "^HT50L3200U_64LQFP$|^HT50L3200W_48LQFP$|^HT50L3200X_48LQFP$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
