cmake_minimum_required(VERSION 2.8)

project(demo)

aux_source_directory(. CPP_LIST)
add_executable(project ${CPP_LIST})