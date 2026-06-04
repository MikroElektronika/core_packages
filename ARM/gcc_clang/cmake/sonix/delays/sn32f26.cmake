if(${MCU_NAME} MATCHES "^SN32F263X$|^SN32F2641J$|^SN32F265J$|^SN32F267J$|^SN32F268F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
