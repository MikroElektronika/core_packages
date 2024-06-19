if(${MCU_NAME} MATCHES "^STM32C031C4$|^STM32C031F4$|^STM32C031G4$|^STM32C031K4$|^STM32C031C6$|^STM32C031F6$|^STM32C031G6$|^STM32C031K6$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_2/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
