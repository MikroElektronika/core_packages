if(${MCU_NAME} MATCHES "^MK63FN1M0VLQ12$|^MK63FN1M0VMD12$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
