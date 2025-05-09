if(${MCU_NAME} MATCHES "^MKV42F256VLH16$|^MKV42F256VLL16$|^MKV44F256VLH16$|^MKV44F256VLL16$|^MKV46F256VLH16$|^MKV46F256VLL16$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/system_nxp_mkv4xfxx.c)
    list(APPEND local_list_include system/inc/${vendor}/system_nxp_mkv4xfxx.h)
    list(APPEND local_list_install system/inc/${vendor}/system_nxp_mkv4xfxx.h)
endif()
