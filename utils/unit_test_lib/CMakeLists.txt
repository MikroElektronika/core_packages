cmake_minimum_required(VERSION 3.21)

if (${TOOLCHAIN_LANGUAGE} MATCHES "MikroC")
    project(lib_unittest LANGUAGES MikroC)
else()
    project(lib_unittest LANGUAGES C ASM)
endif()

add_library(lib_unittest STATIC
    src/unit_test_api.c
    include/unit_test_api.h
)

add_library(MikroC.UnitTest ALIAS lib_unittest)
set_property(TARGET lib_unittest PROPERTY C_STANDARD 99)

target_include_directories(lib_unittest PUBLIC
    include
)

if (${MIKROSDK_TYPE} STREQUAL "mikrosdk")
    find_package(MikroC.Core REQUIRED)
    target_link_libraries(lib_unittest PUBLIC
        MikroC.Core
    )
else()
    find_package(MikroC.System REQUIRED)
    target_link_libraries(lib_unittest PUBLIC
        MikroC.System
    )
endif()
