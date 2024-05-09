if(${MCU_NAME} MATCHES "^STM32L4Q5AG$|^STM32L4Q5CG$|^STM32L4Q5QG$|^STM32L4Q5RG$|^STM32L4Q5VG$|^STM32L4Q5ZG$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_161/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
