if(${MCU_NAME} MATCHES "^ESP8684H2X$|^ESP8684H4X$")
    list(APPEND local_list_include system/src/${vendor}/esp32c2/init_clock.c)
endif()
