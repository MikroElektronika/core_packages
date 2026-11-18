if(${MCU_NAME} MATCHES "^NRF9151-LACA$|^NRF9160-SIAA$|^NRF9160-SIBA$|^NRF9160-SICA$|^NRF9161-LACA$")
    list(APPEND local_list_macros "getClockValue(_clock) (_clock/1000UL/4)")
endif()
