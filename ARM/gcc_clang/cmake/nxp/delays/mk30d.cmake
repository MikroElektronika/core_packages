if(${MCU_NAME} MATCHES "^MK30DN512VLK10$|^MK30DN512VLL10$|^MK30DN512VLQ10$|^MK30DN512VMC10$|^MK30DN512VMD10$|^MK30DX128VLQ10$|^MK30DX128VMD10$|^MK30DX256VLQ10$|^MK30DX256VMD10$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
