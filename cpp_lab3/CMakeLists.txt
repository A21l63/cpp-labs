cmake_minimum_required(VERSION 3.21)
project(cpp_lab3)

set(CMAKE_CXX_STANDARD 20)


set(SDL2_PATH "/Library/Frameworks/SDL2.framework/SDL2")
find_package(SDL2 REQUIRED)
include_directories( ${SDL2_INCLUDE_DIR})

set(SDL2_TTF_PATH "/Library/Frameworks/SDL2_ttf.framework")
find_package(SDL2_ttf REQUIRED)
include_directories( ${SDL2_TTF_INCLUDE_DIR})

set(SDL2_IMAGE_PATH "/Library/Frameworks/SDL2_image.framework")
find_package(SDL2_image REQUIRED)
include_directories( ${SDL2_IMAGE_INCLUDE_DIR})

add_executable(cpp_lab3 main.cpp Button.cpp Button.h includeLibs.h MainButtons.cpp MainButtons.h PopButtons.cpp PopButtons.h ConfigAnalyser.cpp ConfigAnalyser.h Menu.cpp Menu.h DialogButtons.cpp DialogButtons.h Rectan.cpp Rectan.h MenuInit.cpp MenuInit.h)

target_link_libraries(cpp_lab3 ${SDL2_PATH} ${SDL2_TTF_PATH} ${SDL2_IMAGE_PATH})


