cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(project_name "pong")

project(${project_name})

add_subdirectory(deps)

add_executable(${project_name} 
    src/main.cpp
    )

target_link_libraries(${project_name} PRIVATE sfml-graphics)
