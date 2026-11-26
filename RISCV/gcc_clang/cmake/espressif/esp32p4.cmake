if(${MCU_NAME} MATCHES "^ESP32\-P4NRW16X$|^ESP32\-P4NRW32X$")
    list(APPEND local_list_include system/src/${vendor}/esp32p4/init_clock.c)
endif()
