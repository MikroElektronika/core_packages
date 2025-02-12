if(${MCU_NAME} MATCHES "^PIC18F86J99$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()