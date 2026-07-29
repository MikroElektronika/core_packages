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
## Function to get MCU vendor based on MCU name
#############################################################################
function(get_mcu_vendor vendor)

    if(${MCU_NAME} MATCHES "^R7F.+$")
        set(${vendor} renesas PARENT_SCOPE)
    else()
        message(FATAL_ERROR "${MCU_NAME} not supported in LLVM by NECTO.")
    endif()

endfunction()

#############################################################################
## Function to set appropriate linker, startup and source files
#############################################################################
function(core_files_set fileListInclude fileDirInclude fileListInstall linkerScript startupFile thirdpartyInstall)
    set(local_list_include ${fileListInclude})
    set(local_list_install ${fileListInstall})
    set(local_dir_install ${fileDirInclude})

    list(APPEND local_list_install "common/delays.h")

    get_mcu_vendor(vendor)
    list(APPEND local_list_include def/${vendor}/${MCU_NAME}/mcu.h)
    list(APPEND local_list_install def/${vendor}/${MCU_NAME}/mcu.h)

    list(APPEND local_dir_install system/inc/${vendor})
    list(APPEND local_dir_install def/${vendor}/${MCU_NAME})

    # Include mcu based on full mcu name matched
    string(TOLOWER ${MCU_NAME} mcu_match)
    string(SUBSTRING ${MCU_NAME} 0 8 MCU_NAME_FIRST_8)
    string(TOLOWER ${MCU_NAME_FIRST_8} MCU_NAME_FIRST_8_LOWER)
    string(SUBSTRING ${MCU_NAME} 0 6 MCU_NAME_FIRST_6)
    string(TOLOWER ${MCU_NAME_FIRST_6} MCU_NAME_FIRST_6_LOWER)

    file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/cmake/${vendor}/*.cmake)
    foreach(cmakeFile ${CMAKE_FILES})
        include(${cmakeFile})
    endforeach()

    set(${list} ${local_dir_install} PARENT_SCOPE)

    set(${list} ${local_list_include} PARENT_SCOPE)
    set(${list} ${local_list_install} PARENT_SCOPE)

    if(NOT thirdpartyInstall)
        set(${thirdpartyInstall} "" PARENT_SCOPE)
    endif()

endfunction()

#############################################################################
## Function to set appropriate linker flags
#############################################################################
function(set_flags flags)
    message (INFO "Setting flags for ${CORE_NAME} core and ${MCU_NAME} MCU")

    if (${CORE_NAME} STREQUAL "RL78")
        set(${flags} -fno-builtin -ffunction-sections -fdata-sections -fomit-frame-pointer -mmirror-source-common -mcommon-rom -fno-aligned-allocation -mnear-code -mnear-data -Og -fdiagnostics-parseable-fixits -nostartfiles -fno-strict-aliasing -mcpu=s2 -mdisable-mda PARENT_SCOPE)
    else()
        message(FATAL_ERROR "MCU Core not supported.")
    endif()

endfunction()

#############################################################################
## Macro to create interface headers according to lib alias
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
