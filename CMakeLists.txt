cmake_minimum_required (VERSION 3.8)
project (bijou)

SET (CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

