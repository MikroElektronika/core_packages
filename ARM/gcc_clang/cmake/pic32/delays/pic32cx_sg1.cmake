if(${MCU_NAME} MATCHES "^PIC32CX0525SG12084$|^PIC32CX0525SG12144$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/6)")
endif()
