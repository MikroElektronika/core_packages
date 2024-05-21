if(${MCU_NAME} MATCHES "^STM32G483CE$|^STM32G483RE$|^STM32G483ME$|^STM32G483PE$|^STM32G483VE$|^STM32G483QE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_86/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
