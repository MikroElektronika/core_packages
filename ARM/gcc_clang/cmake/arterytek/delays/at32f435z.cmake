if(${MCU_NAME} MATCHES "^AT32F435ZCT7$|^AT32F435ZDT7$|^AT32F435ZGT7$|^AT32F435ZMT7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
