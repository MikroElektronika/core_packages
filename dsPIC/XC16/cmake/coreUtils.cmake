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
    # INSTALL EXPORT FILE
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

    ## configure package version file
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
    if(${MEMAKE_MCU_NAME} MATCHES "^(ds)?PIC(24|30|33).+$")
        set(${_chip_architecture} "pic_16bit" PARENT_SCOPE)
    else()
        set(${_chip_architecture} "__chip_error__" PARENT_SCOPE)
    endif()
endfunction()

#############################################################################
## Function to get MCU family based on MCU name
#############################################################################
function(get_mcu_family family)

    if(${MCU_NAME} MATCHES "^dsPIC33.+$")
        set(${family} dspic33 PARENT_SCOPE)
    elseif(${MCU_NAME} MATCHES "^PIC24.+$")
        set(${family} pic24 PARENT_SCOPE)
    elseif(${MCU_NAME} MATCHES "^dsPIC30.+$")
        set(${family} dspic30 PARENT_SCOPE)
    else()
        message(FATAL_ERROR "${MCU_NAME} not supported in XC16 by NECTO.")
    endif()

endfunction()

#############################################################################
## Function for geting fosc_per_cyc
#############################################################################
function(get_fosc_per_cyc)

    if(${MCU_NAME} MATCHES "^dsPIC30.+$")
        if(NOT ${MCU_NAME} MATCHES "^dsPIC30F(1010|2020|2023)$")
            target_compile_definitions(lib_core
                PUBLIC
                    -DFOSC_PER_CYC=4
            )
        else()
            target_compile_definitions(lib_core
                PUBLIC
                    -DFOSC_PER_CYC=2
            )
        endif()
    elseif(${MCU_NAME} MATCHES "^(dsPIC33|PIC24).+$")
        target_compile_definitions(lib_core
            PUBLIC
                -DFOSC_PER_CYC=2
        )
    endif()

endfunction()

#############################################################################
## Function to set appropriate linker, startup and source files
#############################################################################
function(core_files_set fileListInclude fileDirInclude fileListInstall linkerScript)

    set(local_list_include ${fileListInclude})
    set(local_list_install ${fileListInstall})
    set(local_dir_install ${fileDirInclude})

    list(APPEND local_list_install "common/delays.h")

    list(APPEND local_list_include def/${MCU_NAME}/mcu.h)
    list(APPEND local_list_install def/${MCU_NAME}/mcu.h)

    list(APPEND local_dir_install def/${MCU_NAME})
    set(${list} ${local_dir_install} PARENT_SCOPE)

    string(TOLOWER ${MCU_NAME} mcu_match)

    file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/dspic/*.cmake)
    foreach(cmakeFile ${CMAKE_FILES})
        include(${cmakeFile})
    endforeach()

    set(${list} ${local_list_include} PARENT_SCOPE)
    set(${list} ${local_list_install} PARENT_SCOPE)

endfunction()
