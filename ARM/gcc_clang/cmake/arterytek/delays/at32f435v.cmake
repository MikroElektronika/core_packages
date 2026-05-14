if(${MCU_NAME} MATCHES "^AT32F435VCT7$|^AT32F435VDT7$|^AT32F435VGT7$|^AT32F435VMT7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
