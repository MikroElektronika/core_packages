if(${MCU_NAME} MATCHES "^MK10DN32VFM5$|^MK10DX32VFM5$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


