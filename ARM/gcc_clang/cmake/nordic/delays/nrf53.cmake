if(${MCU_NAME} MATCHES "^NRF5340-CLAA$|^NRF5340-CMAA$|^NRF5340-QKAA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
