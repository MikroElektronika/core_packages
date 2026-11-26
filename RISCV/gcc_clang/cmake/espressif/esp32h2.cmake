if(${MCU_NAME} MATCHES "^ESP32\-H2FH2S$|^ESP32\-H2FH4S$")
    list(APPEND local_list_include system/src/${vendor}/esp32h2/init_clock.c)
endif()
