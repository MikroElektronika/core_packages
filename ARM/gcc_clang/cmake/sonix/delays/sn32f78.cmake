if(${MCU_NAME} MATCHES "^SN32F785F$|^SN32F785J$|^SN32F787F$|^SN32F788F$|^SN32F789F$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
