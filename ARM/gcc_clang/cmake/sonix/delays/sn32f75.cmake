if(${MCU_NAME} MATCHES "^SN32F755J$|^SN32F756J$|^SN32F757F$|^SN32F758F$|^SN32F759F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
