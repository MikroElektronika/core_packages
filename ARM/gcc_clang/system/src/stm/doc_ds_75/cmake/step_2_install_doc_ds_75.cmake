if(${MCU_NAME} MATCHES "^STM32G061C6$|^STM32G061F6$|^STM32G061G6$|^STM32G061K6$|^STM32G061C8$|^STM32G061F8$|^STM32G061G8$|^STM32G061K8$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_75/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
