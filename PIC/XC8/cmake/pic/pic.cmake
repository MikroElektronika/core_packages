## Get appropriate linker script.
if(${MCU_NAME} MATCHES "^PIC.+$")
    list(APPEND fileListInclude def/${MCU_NAME}/mcu.h)
endif()
