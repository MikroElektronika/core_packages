if(${MCU_NAME} MATCHES "^STM32H7S3A8$|^STM32H7S3I8$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_193_1/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
