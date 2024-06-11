include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
#############################################################################
## Function to install and export static library target
#############################################################################
function(mikrosdk_install targetAlias)
## Install library
    get_target_property(_targetName ${targetAlias} ALIASED_TARGET)
    get_target_property(linkLibs ${_targetName} INTERFACE_LINK_LIBRARIES)
    install(TARGETS ${_targetName}
        EXPORT ${targetAlias}Target
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
    # Install export file
    install(EXPORT ${targetAlias}Target
        FILE ${targetAlias}Targets.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})
    ## Set variable used in configFile
    set(TARGET_NAME ${targetAlias})
    set(findDepsList "")

    foreach(LIB ${linkLibs})
        list(APPEND findDepsList "find_dependency(${LIB})")
    endforeach()
    if (linkLibs)
        list(JOIN findDepsList "\n" FIND_DEPS)
    else()
        set(FIND_DEPS "")
    endif()
    ## Configure package file
    configure_package_config_file(${PROJECT_SOURCE_DIR}/cmake/ExportConfig.cmake.in
         "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}Config.cmake"
         INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})


    ## Configure package version file
    write_basic_package_version_file(
        "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}ConfigVersion.cmake"
        VERSION ${CMAKE_PROJECT_VERSION}
        COMPATIBILITY AnyNewerVersion
        ARCH_INDEPENDENT)
    ## Install package export and package version file
    install(FILES
          "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}Config.cmake"
          "${CMAKE_CURRENT_BINARY_DIR}/${targetAlias}ConfigVersion.cmake"
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${targetAlias})
endfunction()

#############################################################################
## Function to create static library target
#############################################################################
macro(mikrosdk_add_library functionName functionAlias)
    add_library(${functionName} STATIC ${ARGN})
    add_library(${functionAlias}  ALIAS ${functionName})
    set_target_properties(${functionName} PROPERTIES LINKER_LANGUAGE C)
    set_property(TARGET ${functionName} PROPERTY C_STANDARD 99)
    set_target_properties(${functionName} PROPERTIES EXPORT_NAME ${functionAlias})
    target_compile_definitions(${functionName}
        PUBLIC
            code=
    )
endmacro()

#############################################################################
## Function to create interface header only library target
#############################################################################
macro(mikrosdk_add_interface_library functionName functionAlias)
    add_library(${functionName} INTERFACE ${ARGN})
    add_library(${functionAlias}  ALIAS ${functionName})
    set_target_properties(${functionName} PROPERTIES LINKER_LANGUAGE C)
    set_property(TARGET ${functionName} PROPERTY C_STANDARD 99)
    set_target_properties(${functionName} PROPERTIES EXPORT_NAME ${functionAlias})
    target_compile_definitions(${functionName}
        INTERFACE
            code=
    )
endmacro()

#############################################################################
## Function to deduce chip architecture from current MCU name and CORE
#############################################################################
function(find_chip_architecture _chip_architecture)
    if((${MEMAKE_CORE_NAME} STREQUAL "M0") OR (${MEMAKE_CORE_NAME} STREQUAL "M3") OR
        (${MEMAKE_CORE_NAME} STREQUAL "M4EF") OR (${MEMAKE_CORE_NAME} STREQUAL "M4DSP") OR
        (${MEMAKE_CORE_NAME} STREQUAL "M7"))
        if(${MEMAKE_MCU_NAME} MATCHES "^STM.*")
            set(${_chip_architecture} "arm" PARENT_SCOPE)
        elseif(${MEMAKE_MCU_NAME} MATCHES "^MK.*")
            set(${_chip_architecture} "arm" PARENT_SCOPE)
        elseif(${MEMAKE_MCU_NAME} MATCHES "^TM4C.*")
            set(${_chip_architecture} "arm" PARENT_SCOPE)
        else()
            set(${_chip_architecture} "UNSUPPORTED_CHIP_SELECTED_FOR_FOLLOWING_IMPLEMENTATION" PARENT_SCOPE)
        endif()
    elseif(${MEMAKE_CORE_NAME} STREQUAL "P18" PARENT_SCOPE)
        if(${MEMAKE_MCU_NAME} MATCHES "(^PIC18F[2-6][^4]K4.$)|(^PIC18LF[2-6][^4]K4.$)|(^PIC18(.+)K80$)|(^PIC18(.+)[24](.+)K50$)|(^PIC18(.+)J94$)|(^PIC18(.+)2[^4]J[5][03]$)|(^PIC18(.+)4[4-7]J[5][03]$)|(^PIC18(.+)[68][5-7]J[59][03]$)|(^PIC18F[568][567]J10$)|(^PIC18(.+)J1[356]$)|(^PIC18(.+)J[6][05]$)|(^PIC18F[68]6J55$)|(^PIC18F(.+)J[57][25]$)|(^PIC18F[24]6K20$)|(^PIC18(.+)K90$)|(^PIC18(.+)[2468][6]K22$)|(^PIC18(.+)[68][57]K22$)|(^PIC18(.+)[268][5-9]J11$)|(^PIC18(.+)[24][456]J11$)|(^PIC18F[68][5-7]J11$)|(^PIC18(.+)[2][4][^1][58](.+)$)|(^PIC18(.+)25[5][03]$)|(^PIC18(.+)25[128][5]$)|(^PIC18(.+)26[8][025]$)|(^PIC18(.+)26[12][0]$)|(^PIC18(.+)445[58]$)|(^PIC18(.+)45(.+)[5]$)|(^PIC18(.+)455[03]$)|(^PIC18(.+)46[128][025]$)|(^PIC18(.+)65[28][057]$)|(^PIC18(.+)66[28][01278]$)|(^PIC18(.+)67[2][023]$)|(^PIC18(.+)85[28][057]$)|(^PIC18(.+)8[67][28](.+)$)|(^PIC18(.+)245[58]$)|(^PIC18(.+)45K22)|(^PIC18F[245][5-7]Q43$)|(^PIC18F[24][5-7]Q10$)")
            set(${_chip_architecture} "pic_8bit" PARENT_SCOPE)
        else()
            set(${_chip_architecture} "UNSUPPORTED_CHIP_SELECTED_FOR_FOLLOWING_IMPLEMENTATION" PARENT_SCOPE)
        endif()
    elseif((${MEMAKE_CORE_NAME} STREQUAL "MIPS32") OR (${MEMAKE_CORE_NAME} STREQUAL "MICROAPTIV_FP") OR (${MEMAKE_CORE_NAME} STREQUAL "MICROAPTIV"))
        if(${MEMAKE_MCU_NAME} MATCHES "(^PIC32MX[1-7][1-79][045]F(512|256|128|064|032|016)[HLBCD]B?$|^PIC32MZ(0512|1024|2048)EF[FEHMGK](064|100|124|144)$)")
            set(${_chip_architecture} "pic_32bit" PARENT_SCOPE)
        else()
            set(${_chip_architecture} "UNSUPPORTED_CHIP_SELECTED_FOR_FOLLOWING_IMPLEMENTATION" PARENT_SCOPE)
        endif()
    else()
        set(${_chip_architecture} "__chip_error__" PARENT_SCOPE)
    endif()
endfunction()

#############################################################################
## Function to deduce cortex name from MCU
#############################################################################
function(find_cortex listArg)
    set(local_list ${listArg})

    if (${MEMAKE_MCU_NAME} MATCHES "^......(.)")
        if(${CMAKE_MATCH_1} STREQUAL "0")
            list(APPEND local_list __cortex_m0__ PARENT_SCOPE)
        elseif((${CMAKE_MATCH_1} STREQUAL "1") OR (${CMAKE_MATCH_1} STREQUAL "2"))
            list(APPEND local_list __cortex_m3__ PARENT_SCOPE)
            elseif((${CMAKE_MATCH_1} STREQUAL "3") OR (${CMAKE_MATCH_1} STREQUAL "4"))
            list(APPEND local_list __cortex_m4__ PARENT_SCOPE)
        elseif(${CMAKE_MATCH_1} STREQUAL "7")
            list(APPEND local_list __cortex_m7__ PARENT_SCOPE)
        else()
            list(APPEND local_list __cortex_not_supported__ PARENT_SCOPE)
        endif()
    endif()
    set(${list} ${local_list} PARENT_SCOPE)
endfunction()

#############################################################################
## Function to deduce mcu header path
#############################################################################
function(find_mcu_header_path listArg _mcu_header_path _mcu_name_first_7_chars)

    set(local_list ${listArg})

    string(LENGTH ${MEMAKE_MCU_NAME} MEMAKE_MCU_NAME_LENGTH)
    string(SUBSTRING ${MEMAKE_MCU_NAME} 0 ${MEMAKE_MCU_NAME_LENGTH}-2 MEMAKE_MCU_NAME_STRIPPED_BY_2)
    list(APPEND local_list ${MEMAKE_MCU_NAME_STRIPPED_BY_2}xx)     #STM32 + Product type + Series number + sub-lines + lines + 'xx'
    string(SUBSTRING ${MEMAKE_MCU_NAME} 0 8 MEMAKE_MCU_NAME_FIRST_8)
    list(APPEND local_list ${MEMAKE_MCU_NAME_FIRST_8}x)      #STM32 + Product type + Series number + 'xx'
    string(SUBSTRING ${MEMAKE_MCU_NAME} 0 7 MEMAKE_MCU_NAME_FIRST_7)
    set(${_mcu_name_first_7_chars} ${MEMAKE_MCU_NAME_FIRST_7} PARENT_SCOPE)
    list(APPEND local_list ${MEMAKE_MCU_NAME_FIRST_7}xx)     #STM32 + Product type + Series number + 'xx'
    set(${_mcu_header_path} ${MEMAKE_MCU_NAME}${MSDK_PACKAGE_NAME} PARENT_SCOPE)
    string(SUBSTRING ${MEMAKE_MCU_NAME} 11 1 MEMAKE_MCU_NAME_11TH_CHAR)
    if(${MEMAKE_MCU_NAME_11TH_CHAR} MATCHES "_")
    string(SUBSTRING ${_mcu_header_path} 0 11 FIRST_11_CHARS)
       set(${_mcu_header_path} ${FIRST_11_CHARS}${MSDK_PACKAGE_NAME} PARENT_SCOPE)
    endif()

    set(${list} ${local_list} PARENT_SCOPE)
endfunction()

#############################################################################
## Function to get MCU vendor based on MCU name
#############################################################################
function(get_mcu_vendor vendor)

    if(${MCU_NAME} MATCHES "^STM32.+$")
        set(${vendor} stm PARENT_SCOPE)
    elseif(${MCU_NAME} MATCHES "^MK.+$")
        set(${vendor} nxp PARENT_SCOPE)
    elseif(${MCU_NAME} MATCHES "^TM4C.+$")
        set(${vendor} ti PARENT_SCOPE)
    else()
        message(FATAL_ERROR "${MCU_NAME} not supported in GCC by NECTO.")
    endif()

endfunction()

#############################################################################
## Function to set appropriate linker, startup and source files
#############################################################################
function(core_files_set fileListInclude fileDirInclude fileListInstall linkerScript startupFile)

    set(local_list_include ${fileListInclude})
    set(local_list_install ${fileListInstall})
    set(local_dir_install ${fileDirInclude})

    list(APPEND local_list_install "common/delays.h")

    get_mcu_vendor(vendor)
    list(APPEND local_list_include def/${vendor}/${MCU_NAME}/mcu.h)
    list(APPEND local_list_install def/${vendor}/${MCU_NAME}/mcu.h)

    list(APPEND local_dir_install system/inc/${vendor})
    list(APPEND local_dir_install def/${vendor}/${MCU_NAME})
    set(${list} ${local_dir_install} PARENT_SCOPE)

    # Include mcu based on full mcu name matched
    string(TOLOWER ${MCU_NAME} mcu_match)

    file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/${vendor}/*.cmake)
    foreach(cmakeFile ${CMAKE_FILES})
        include(${cmakeFile})
    endforeach()

    set(${list} ${local_list_include} PARENT_SCOPE)
    set(${list} ${local_list_install} PARENT_SCOPE)

endfunction()

#############################################################################
## Function to set appropriate linker flags
#############################################################################
function(set_flags flags)

    if (${CORE_NAME} STREQUAL "M0")
        if (${MCU_NAME} MATCHES "^STM32F0.+$")
            set(${flags} -std=gnu99 -Wl,-Map=output.map,-gc-sections,--print-memory-usage -mcpu=cortex-m0 -mthumb --specs=nosys.specs -ffunction-sections -fdata-sections -fno-common -fmessage-length=0 -Wno-int-conversion -Wno-incompatible-function-pointer-types -Wno-implicit-function-declaration PARENT_SCOPE)
        else()
            set(${flags} -std=gnu99 -Wl,-Map=output.map,-gc-sections,--print-memory-usage -mcpu=cortex-m0plus -mthumb --specs=nosys.specs -ffunction-sections -fdata-sections -fno-common -fmessage-length=0 -Wno-int-conversion -Wno-incompatible-function-pointer-types -Wno-implicit-function-declaration PARENT_SCOPE)
        endif()
    elseif (${CORE_NAME} STREQUAL "M3")
        set(${flags} -std=gnu99 -Wl,-Map=output.map,-gc-sections,--print-memory-usage -mcpu=cortex-m3 -mthumb --specs=nosys.specs -ffunction-sections -fdata-sections -fno-common -fmessage-length=0 -Wno-int-conversion -Wno-incompatible-function-pointer-types -Wno-implicit-function-declaration PARENT_SCOPE)
    elseif (${CORE_NAME} STREQUAL "M4EF")
        set(${flags} -std=gnu99 -Wl,-Map=output.map,-gc-sections,--print-memory-usage -mcpu=cortex-m4 -mthumb --specs=nosys.specs -mfloat-abi=hard -mfpu=fpv4-sp-d16 -ffunction-sections -fdata-sections -fno-common -fmessage-length=0 -Wno-int-conversion -Wno-incompatible-function-pointer-types -Wno-implicit-function-declaration PARENT_SCOPE)
    elseif (${CORE_NAME} STREQUAL "M4DSP")
        set(${flags} -std=gnu99 -Wl,-Map=output.map,-gc-sections,--print-memory-usage -mcpu=cortex-m4 -mthumb --specs=nosys.specs -mfloat-abi=soft -mfpu=fpv4-sp-d16 -ffunction-sections -fdata-sections -fno-common -fmessage-length=0 -Wno-int-conversion -Wno-incompatible-function-pointer-types -Wno-implicit-function-declaration PARENT_SCOPE)
    elseif (${CORE_NAME} STREQUAL "M7")
        set(${flags} -std=gnu99 -Wl,-Map=output.map,-gc-sections,--print-memory-usage -mcpu=cortex-m7 -mthumb --specs=nosys.specs -mfloat-abi=hard -mfpu=fpv5-d16 -ffunction-sections -fdata-sections -fno-common -fmessage-length=0 -Wno-int-conversion -Wno-incompatible-function-pointer-types -Wno-implicit-function-declaration PARENT_SCOPE)
    else()
        message(FATAL_ERROR "MCU Core not supported.")
    endif()

endfunction()

#############################################################################
## Function to create interface headers according to lib alias
#############################################################################
macro(add_macros fileDestination fileList)
    # Cannot use ARGN directly with list() command,
    # so copy it to a variable first.
    set (extra_args ${ARGN})

    # Did we get any optional args?
    list(LENGTH extra_args extra_count)
    if (${extra_count} GREATER 0)
        # Create a list of directives
        set(MACRO_LIST "")
        foreach(ARGUMENT ${extra_args})
            string(APPEND MACRO_LIST "#define ${ARGUMENT}\n")
        endforeach()

        # Generate output file with adequate name and include directive
        configure_file(${PROJECT_SOURCE_DIR}/cmake/InstallHeaders.cmake.in ${fileDestination}/${fileList})
    endif ()
endmacro()

#############################################################################
## Function to set appropriate values for delay calculations
#############################################################################
function(set_delay_parameters delay_parameters)
    set(local_list_macros ${delay_parameters})

    get_mcu_vendor(vendor)

    file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/${vendor}/delays/*.cmake)
    foreach(cmakeFile ${CMAKE_FILES})
        include(${cmakeFile})
    endforeach()

    set(${list} ${local_list_macros} PARENT_SCOPE)
endfunction()
