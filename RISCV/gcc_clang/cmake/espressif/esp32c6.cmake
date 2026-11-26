if(${MCU_NAME} MATCHES "^ESP32\-C6$|^ESP32\-C6FH4$|^ESP32\-C6FH8$")
    list(APPEND local_list_include system/src/${vendor}/esp32c6/init_clock.c)
endif()
