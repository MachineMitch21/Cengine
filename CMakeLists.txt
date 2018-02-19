CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(cengine)

file(GLOB SOURCES src/*.c src/*.cc src/math/*.c src/math/*.cc)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

set ( CMAKE_C_FLAGS "-g -Wall -Wwrite-strings -std=c99")

add_definitions(-DCENGINE_BUILD -DGLEW_STATIC -DGLEW_NO_GLU)

target_include_directories(${PROJECT_NAME} PRIVATE include/cengine/ external/)

if (UNIX)
target_link_libraries(${PROJECT_NAME} GLEW glfw3 GL X11 Xi Xrandr Xxf86vm Xinerama Xcursor rt pthread dl)
endif (UNIX)

if (WIN32)
target_link_libraries(${PROJECT_NAME} glfw3 opengl32 user32 kernel32 glew32)
endif (WIN32)
