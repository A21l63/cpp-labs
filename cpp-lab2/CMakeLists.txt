cmake_minimum_required(VERSION 3.21)
project(cpp_lab2)

set(CMAKE_CXX_STANDARD 20)

set(SDL2_PATH "/Library/Frameworks/SDL2.framework/SDL2")
find_package(SDL2 REQUIRED)
include_directories( ${SDL2_INCLUDE_DIR})

set(SDL2_TTF_PATH "/Library/Frameworks/SDL2_ttf.framework")
find_package(SDL2_ttf REQUIRED)
include_directories( ${SDL2_TTF_INCLUDE_DIR})

add_executable(cpp_lab2 main.cpp flying_rect.cpp flying_rect.h Point.cpp Point.h Segment.cpp Segment.h)

target_link_libraries(cpp_lab2 ${SDL2_PATH} ${SDL2_TTF_PATH} )



