if(${MCU_NAME} MATCHES "^MKV30F128VFM10$|^MKV30F128VLF10$|^MKV30F128VLH10$|^MKV30F64VLF10$|^MKV30F64VFM10$|^MKV30F64VLH10$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
