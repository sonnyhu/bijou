cmake_minimum_required (VERSION 3.8)
project (bijou)

SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

set(LSQ_DIR ${PROJECT_SOURCE_DIR}/bijou/lsq/)
add_executable(lsq ${LSQ_DIR}/main.cpp ${LSQ_DIR}/lsq.cpp ${LSQ_DIR}/lsq.h)

