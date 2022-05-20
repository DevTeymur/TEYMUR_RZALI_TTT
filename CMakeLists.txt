cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(TEYMUR_RZALI_TTT LANGUAGES C)
project(${PROJECT_NAME} VERSION 1.0)


add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PRIVATE main.c)

target_link_libraries(${PROJECT_NAME} PUBLIC game)

add_subdirectory(game)






