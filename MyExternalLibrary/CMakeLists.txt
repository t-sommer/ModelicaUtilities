cmake_minimum_required (VERSION 3.17)

project (MyExternalLibrary)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_library(MyExternalLibrary SHARED
    ../ModelicaUtilities/Resources/Include/ModelicaUtilityFunctions.h
    MyExternalLibrary.h
    MyExternalLibrary.c
)

target_include_directories(MyExternalLibrary PRIVATE
    ../ModelicaUtilities/Resources/Include
)

install(TARGETS MyExternalLibrary DESTINATION ${CMAKE_SOURCE_DIR}/../ModelicaUtilities/Resources/Library/win64/)
