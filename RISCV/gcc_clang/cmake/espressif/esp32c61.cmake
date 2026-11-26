if(${MCU_NAME} MATCHES "^ESP32\-C61HF4$|^ESP32\-C61HR2$|^ESP32\-C61HR8$|^ESP32\-C61NF8R8LA$")
    list(APPEND local_list_include system/src/${vendor}/esp32c61/init_clock.c)
endif()
