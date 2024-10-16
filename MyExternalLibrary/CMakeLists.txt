cmake_minimum_required (VERSION 3.17)

if (WIN32)
    set(MODELICA_PLATFORM win64)
elseif (APPLE)
    set(MODELICA_PLATFORM darwin64)
else ()
    set(MODELICA_PLATFORM linux64)
endif ()

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

install(TARGETS MyExternalLibrary DESTINATION ${CMAKE_SOURCE_DIR}/../ModelicaUtilities/Resources/Library/${MODELICA_PLATFORM})
