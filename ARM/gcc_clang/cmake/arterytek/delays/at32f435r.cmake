if(${MCU_NAME} MATCHES "^AT32F435RCT7$|^AT32F435RDT7$|^AT32F435RGT7$|^AT32F435RMT7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
