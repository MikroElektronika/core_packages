if(${MCU_NAME} MATCHES "^STM32C011F4$|^STM32C011J4$|^STM32C011F6$|^STM32C011J6$|^STM32C011D6$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_1/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
