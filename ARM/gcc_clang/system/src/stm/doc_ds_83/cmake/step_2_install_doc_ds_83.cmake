if(${MCU_NAME} MATCHES "^STM32G441CB$|^STM32G441KB$|^STM32G441RB$|^STM32G441MB$|^STM32G441VB$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_83/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
