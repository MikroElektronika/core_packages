if(${MCU_NAME} MATCHES "^STM32G484CE$|^STM32G484ME$|^STM32G484PE$|^STM32G484RE$|^STM32G484QE$|^STM32G484VE$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_87/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
