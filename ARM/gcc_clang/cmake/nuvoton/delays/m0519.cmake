if(${MCU_NAME} MATCHES "^M0519LD3AE$|^M0519LE3AE$|^M0519SD3AE$|^M0519SE3AE$|^M0519VE3AE$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
