if(${MCU_NAME} MATCHES "^STM32G4A1CE$|^STM32G4A1KE$|^STM32G4A1ME$|^STM32G4A1RE$|^STM32G4A1VE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_89/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
