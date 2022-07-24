cmake_minimum_required(VERSION 3.15)
project(ndk_test CXX)

set(CMAKE_CXX_STANDARD  11)

#include_directories(hide-emu)
include_directories(/usr/local/include)
include_directories(/home/y0an11/Android/Sdk/ndk/25.0.8775105/toolchains/llvm/prebuilt/linux-x86_64/sysroot/usr/include)
include_directories(/home/y0an11/Android/Sdk/ndk/25.0.8775105/toolchains/llvm/prebuilt/linux-x86_64/sysroot/usr/include/x86_64-linux-android)
link_directories(/home/y0an11/Android/Sdk/ndk/25.0.8775105/toolchains/llvm/prebuilt/linux-x86_64/sysroot/usr/lib)

include_directories(grpc/src)
#include_directories(native-unpacker)

add_executable(ndk_test
        grpc/src/client.h
        src/main.cpp
)

#target_link_libraries(
#        ndk_test
#
#        ${CMAKE_CURRENT_BINARY_DIR}/cmake-build-androidndk/libclient.so
#)