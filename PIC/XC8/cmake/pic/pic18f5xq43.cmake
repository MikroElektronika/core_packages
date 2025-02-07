if(${MCU_NAME} MATCHES "^PIC18F55Q43$|^PIC18F56Q43$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()