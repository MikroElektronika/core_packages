if(${MCU_NAME} MATCHES "^MKL27Z64VFM4$|^MKL27Z64VLH4$")
    set(${linkerScript} linker_scripts/${vendor}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${mcu_match}.s PARENT_SCOPE)
    list(APPEND local_list_include system/src/nxp/mkl27z64_vfm_vlh_4/init_clock.c)
endif()
