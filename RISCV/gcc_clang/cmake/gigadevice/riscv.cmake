if(${MCU_NAME} MATCHES "(^GD32VF103[CRTV](.+)6$)")
    list(APPEND local_list_include system/src/${vendor}/system_gd32vf103x.c)
    set(${startupFile} startup/${MCU_NAME_LOWER}.s PARENT_SCOPE)
endif()