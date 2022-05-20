cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(game LANGUAGES C)

add_library(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PRIVATE game.h game.c)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
