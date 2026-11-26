# Dual-core MCUs (NECTO core_info): CORE_DIR is core_0_m4ef (core 0) or core_1_m4ef (core 1).
if(${MCU_NAME} MATCHES "^PIC32CX1025MTSH128$|^PIC32CX2051MTSH128$|^PIC32CX5112MTSH128$")
    set(${linkerScript} linker_scripts/${vendor}/${CORE_DIR}/${mcu_match}.ld PARENT_SCOPE)
    set(${startupFile} startup/${vendor}/${CORE_DIR}/${mcu_match}.c PARENT_SCOPE)
    list(APPEND local_list_include system/src/${vendor}/pic32cx_mtsh/init_clock.c)
    list(APPEND local_dir_install system/src/pic32/pic32cx_mtsh/thirdparty/pic32cx_mtsh)
    set(${thirdpartyInstall} pic32cx_mtsh/thirdparty/pic32cx_mtsh PARENT_SCOPE)
endif()
