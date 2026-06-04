if(${MCU_NAME} MATCHES "^SN32F107F$|^SN32F108F$|^SN32F109F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
