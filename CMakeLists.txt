cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(project_name "pong")

project(${project_name})

add_subdirectory(deps)

add_executable(${project_name} 
    src/main.cpp
        src/Game.h
    src/Game.cpp
        src/Player.cpp
        src/Player.h
        src/Utils.h
        src/Enemy.cpp
        src/Enemy.h
)

target_link_libraries(${project_name} PRIVATE sfml-graphics fmt::fmt)
