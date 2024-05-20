cmake_minimum_required(VERSION 3.10)

project(SimpleFactoryProject)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR})

set(SOURCES
    ConceptualExample.cpp
    Documents.cpp
    MobilePhones.cpp
    Points.cpp
    Pizza.cpp
    Program.cpp
   
)

add_executable(SimpleFactory ${SOURCES})

enable_testing()

add_subdirectory(tests)
