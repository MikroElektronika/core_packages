if(${MCU_NAME} MATCHES "^ESP32\-C5HF4$|^ESP32\-C5HR2$|^ESP32\-C5HR8$|^ESP32\-C5NF8R2LA$")
    list(APPEND local_list_include system/src/${vendor}/esp32c5/init_clock.c)
endif()
