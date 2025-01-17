if(${MCU_NAME} MATCHES "^MK02FN128VFM10$|^MK02FN128VLH10$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


