
cmake_minimum_required(VERSION 3.28)

set(EFI20_TARGET_ARCH
    "x86_64"
    CACHE STRING "Target Architecture"
)

set(CMAKE_CXX_STANDARD 20)


# TODO set compiler to be clang++
project(efi20 LANGUAGES CXX ASM)

set(EFI20_SOURCE_DIR 
    ${PROJECT_SOURCE_DIR}/src
)

set(EFI20_MODULE_DIR
    ${EFI20_SOURCE_DIR}/modules
)

set(EFI20_INCLUDE_DIR
    ${EFI20_SOURCE_DIR}/include
)

include (cmake/compile-options.cmake)

add_subdirectory(${EFI20_SOURCE_DIR}/impl)
