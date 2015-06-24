
cmake_minimum_required(VERSION 2.8)
project(LearingCPP)

# Get all source files from src
aux_source_directory(src SRC_LIST)
aux_source_directory(src/ReaingFile SRC_LIST)
# Add executable to project
add_executable(${PROJECT_NAME} ${SRC_LIST})

add_definitions( -std=c++0x -Wextra)

