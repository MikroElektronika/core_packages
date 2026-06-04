if(${MCU_NAME} MATCHES "^SN32F7951F$|^SN32F7951J$|^SN32F795F$|^SN32F795J$|^SN32F797F$|^SN32F798F$|^SN32F799F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
