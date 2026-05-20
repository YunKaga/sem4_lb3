cmake_minimum_required(VERSION 3.15) # минимальная версия cmake

project(Meloman VERSION 1.0 LANGUAGES CXX)  # название проекта

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Позиционно-независимый код для DLL
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
include_directories(${CMAKE_SOURCE_DIR}/header)

add_library(MusicLibrary SHARED
    src/AudioContent.cpp
    src/MusicDisk.cpp
    src/InstrumentalTrack.cpp
    src/Song.cpp
    src/MusicalComposition.cpp
)

target_include_directories(MusicLibrary
    PUBLIC
        ${CMAKE_SOURCE_DIR}/header
)

if(WIN32)
    target_compile_definitions(MusicLibrary PRIVATE MUSIC_LIBRARY_EXPORTS)
endif()

add_executable(Meloman Meloman.cpp)

target_link_libraries(Meloman PRIVATE MusicLibrary)
