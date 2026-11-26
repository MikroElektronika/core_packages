if(${MCU_NAME} MATCHES "^ESP32\-C3$|^ESP32\-C3FH4$|^ESP32\-C3FH4AZ$|^ESP32\-C3FH4X$|^ESP32\-C3FH8X$|^ESP8685H4$")
    list(APPEND local_list_include system/src/${vendor}/esp32c3/init_clock.c)
endif()
