cmake_minimum_required(VERSION 3.16)
project(sca_demo C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(sca_demo
    src/main.c
)

target_include_directories(sca_demo PRIVATE
    ${CMAKE_SOURCE_DIR}/../third_party/zlib-1.2.11
    ${CMAKE_SOURCE_DIR}/../third_party/libpng-1.6.37
    ${CMAKE_SOURCE_DIR}/../third_party/openssl-1.0.2u
)
