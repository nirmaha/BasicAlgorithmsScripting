cmake_minimum_required(VERSION 3.0.0)
project(basicAlgos VERSION 0.1.0)
include_directories(includes)

file(GLOB_RECURSE SOURCE_FILES src/*.c)
file(GLOB_RECURSE INCLUDE_FILES includes/*.h)
add_executable(basicAlgos main.c ${SOURCE_FILES} ${INCLUDE_FILES})
