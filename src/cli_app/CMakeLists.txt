cmake_minimum_required(VERSION 3.15)

project(durak_cli)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../lib ${CMAKE_CURRENT_BINARY_DIR}/lib)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE durak_engine)