if(${MCU_NAME} MATCHES "^PIC18F45Q43$|^PIC18F46Q43$|^PIC18F47Q43$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()