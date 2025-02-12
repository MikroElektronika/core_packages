if(${MCU_NAME} MATCHES "^PIC18F66J99$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()