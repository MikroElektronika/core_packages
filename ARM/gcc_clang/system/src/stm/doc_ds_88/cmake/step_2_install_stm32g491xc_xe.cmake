if(${MCU_NAME} MATCHES "^STM32G491CC$|^STM32G491KC$|^STM32G491RC$|^STM32G491VC$|^STM32G491MC$|^STM32G491CE$|^STM32G491KE$|^STM32G491RE$|^STM32G491VE$|^STM32G491ME$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_88/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
