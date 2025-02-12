if(${MCU_NAME} MATCHES "^PIC18F57Q84$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()