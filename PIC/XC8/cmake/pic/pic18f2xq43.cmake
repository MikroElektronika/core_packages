if(${MCU_NAME} MATCHES "^PIC18F25Q43$|^PIC18F26Q43$|^PIC18F27Q43$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()