if(${MCU_NAME} MATCHES "^ESP32\-S31NRV16$|^ESP32\-S31NRV32$")
    list(APPEND local_list_include system/src/${vendor}/esp32s31/init_clock.c)
endif()
