if(${MCU_NAME} MATCHES "^STM32L4P5AE$|^STM32L4P5AG$|^STM32L4P5CE$|^STM32L4P5CG$|^STM32L4P5QE$|^STM32L4P5QG$|^STM32L4P5RE$|^STM32L4P5RG$|^STM32L4P5VE$|^STM32L4P5VG$|^STM32L4P5ZE$|^STM32L4P5ZG$")
    install(
        DIRECTORY
            "${CMAKE_SOURCE_DIR}/system/src/stm/doc_ds_160/thirdparty"
        DESTINATION
            "${CMAKE_INSTALL_PREFIX}/include/core"
        FILES_MATCHING
            PATTERN
                "*.h"
    )
endif()
