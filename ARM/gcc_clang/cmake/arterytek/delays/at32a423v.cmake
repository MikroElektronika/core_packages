if(${MCU_NAME} MATCHES "^AT32A423V8T7$|^AT32A423VBT7$|^AT32A423VCT7$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
