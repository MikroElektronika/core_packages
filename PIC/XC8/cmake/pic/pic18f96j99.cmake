if(${MCU_NAME} MATCHES "^PIC18F96J99$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()