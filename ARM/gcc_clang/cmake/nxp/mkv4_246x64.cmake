if(${MCU_NAME} MATCHES "^MKV42F64VLF16$|^MKV42F64VLH16$|^MKV44F64VLF16$|^MKV44F64VLH16$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_nxp_mkv4xfxx.c)
    list(APPEND local_list_include system/inc/${vendor}/system_nxp_mkv4xfxx.h)
    list(APPEND local_list_install system/inc/${vendor}/system_nxp_mkv4xfxx.h)
endif()
