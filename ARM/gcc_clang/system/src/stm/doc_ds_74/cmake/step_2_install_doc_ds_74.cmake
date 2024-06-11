if(${MCU_NAME} MATCHES "^STM32G051C6$|^STM32G051F6$|^STM32G051G6$|^STM32G051K6$|^STM32G051C8$|^STM32G051F8$|^STM32G051G8$|^STM32G051K8$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_74/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
