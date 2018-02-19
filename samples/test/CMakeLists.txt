CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(cengine_test)

file(GLOB SOURCES src/*.c src/*.cc)

add_executable(${PROJECT_NAME} ${SOURCES})

SET (CMAKE_C_FLAGS "-g -Wall -std=c99")

target_include_directories(${PROJECT_NAME} PUBLIC cengine/ external/)

link_directories(${PROJECT_SOURCE_DIR}/build ${PROJECT_SOURCE_DIR}/../../build)

target_link_libraries(${PROJECT_NAME} cengine)
