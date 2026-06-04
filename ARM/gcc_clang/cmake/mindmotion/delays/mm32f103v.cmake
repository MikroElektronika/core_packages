if(${MCU_NAME} MATCHES "^MM32F103VCT$|^MM32F103VET$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
