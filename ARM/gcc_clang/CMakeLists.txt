cmake_minimum_required(VERSION 3.11)

project(lib_core VERSION 1 LANGUAGES C ASM)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_STATIC_LIBRARY_PREFIX "")

include(mikroeUtils)

add_preinit_lib()

core_files_set(fileListInclude fileDirInclude fileListInstall linkerScript startupFile)

set_delay_parameters(delayParameters)
add_macros(${CMAKE_BINARY_DIR} delay_parameters.h ${delayParameters})

set(MCU_NAME_LOWER "")
string(TOLOWER ${MCU_NAME} MCU_NAME_LOWER)
set(MCU_CORE_LOWER "")
string(TOLOWER ${CORE_NAME} MCU_CORE_LOWER)

core_add_library(lib_core MikroC.Core
    common/delays.h
    common/common.h
    ${fileListInclude}
    common/me_string.c
    common/me_string.h
    include/core_header.h
    cstdio/source/cstdio.c
    cstdio/include/cstdio.h
    interrupts/interrupts.c
    delays/${MCU_CORE_LOWER}/delays.c
    common/me_compiler_specifics.c
    ${TEST_LIB_PATH}/src/unit_test_api.c
    ${TEST_LIB_PATH}/include/unit_test_api.h
    ${PREINIT_ROUTINE_PATH}/src/preinit.c
    ${PREINIT_ROUTINE_PATH}/include/preinit.h
)

target_include_directories(lib_core
    PRIVATE
        common
        include
        cstdio/include
        ${fileDirInclude}
        interrupts/include
        ${CMAKE_BINARY_DIR}
        ${TEST_LIB_PATH}/include
        ${PREINIT_ROUTINE_PATH}/include
        interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}
    INTERFACE
        $<INSTALL_INTERFACE:include/core>
)

add_fosc_macro(lib_core)

if (${TOOLCHAIN_ID} STREQUAL "clang-llvm")
    target_compile_definitions(lib_core
        PRIVATE
            "_CLANG_LLVM_"
    )
endif()

if (NOT ${CORE_NAME} STREQUAL "M0")
    target_compile_definitions(lib_core
        PRIVATE
            "_INCLUDE_INTERRUPT_CASES_"
    )
endif()

## Add all thirdparty generated cmake files recursivelly
file(GLOB_RECURSE CMAKE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/system/src/*.cmake)
foreach(cmakeFile ${CMAKE_FILES})
    include(${cmakeFile})
endforeach()

core_install(MikroC.Core)

install(
    FILES
        ${fileListInstall}
        common/common.h
        common/me_string.h
        include/me_built_in.h
        cstdio/include/cstdio.h
        interrupts/include/interrupts.h
        ${CMAKE_BINARY_DIR}/core_header.h
        ${CMAKE_BINARY_DIR}/delay_parameters.h
        interrupts/include/interrupts_mcu/${MCU_NAME_LOWER}/interrupts_mcu.h
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/core
)

install(
    FILES
        ${startupFile}
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/../FileStartup
)

install(
    FILES
        ${linkerScript}
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}/../FileLinker
)

target_sources(${PROJECT_NAME} PRIVATE ${linkerScript} ${startupFile})
