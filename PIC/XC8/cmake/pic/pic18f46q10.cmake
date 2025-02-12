if(${MCU_NAME} MATCHES "^PIC18F46Q10$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()