if( ${MCU_NAME} MATCHES "(^GD32VF103[CRTV](.+)6$)" )
    set(SYSTEM_FILE "system_gd32vf103x")
    set(STARTUP_FILE "startup_gd32vf103x")
endif()
