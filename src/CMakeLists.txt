cmake_minimum_required(VERSION 3.20)
project(wxTest)

set(CMAKE_CXX_STANDARD 17)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})

add_executable(wxTest main.cpp)
target_link_libraries(wxTest PRIVATE ${wxWidgets_LIBRARIES})