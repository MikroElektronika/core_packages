if(${MCU_NAME} MATCHES "^MK02FN64VLF10$|^MK02FN64VFM10$|^MK02FN64VLH10$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()


