if(${MCU_NAME} MATCHES "^SN32F235J$|^SN32F236J$|^SN32F237F$|^SN32F238F$|^SN32F239F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
