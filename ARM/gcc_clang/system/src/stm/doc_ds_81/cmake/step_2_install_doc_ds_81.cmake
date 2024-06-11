if(${MCU_NAME} MATCHES "^STM32G0C1CC$|^STM32G0C1KC$|^STM32G0C1MC$|^STM32G0C1RC$|^STM32G0C1VC$|^STM32G0C1CE$|^STM32G0C1KE$|^STM32G0C1ME$|^STM32G0C1NE$|^STM32G0C1RE$|^STM32G0C1VE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_81/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
