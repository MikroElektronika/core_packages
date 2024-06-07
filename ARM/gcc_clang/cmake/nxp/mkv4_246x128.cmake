include(coreUtils)

set_file_list()

if(${MCU_NAME} MATCHES "^MKV4[246]F128.+16$")
    set(${linkerScript} linker_scripts/${vendor}/mkv4xf128xxx16xx.ld PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_nxp_mkv4xfxx.c)
    list(APPEND local_list_include system/inc/${vendor}/system_nxp_mkv4xfxx.h)
    list(APPEND local_list_install system/inc/${vendor}/system_nxp_mkv4xfxx.h)
endif()
