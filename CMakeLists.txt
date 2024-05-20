cmake_minimum_required(VERSION 3.10)
project(SimpleFactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(SimpleFactory main.cpp)

add_subdirectory(src)
add_subdirectory(tests)

enable_testing()
add_test(NAME SimpleFactoryTests COMMAND SimpleFactoryTests)
cmake_minimum_required(VERSION 3.10)
project(SimpleFactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(SimpleFactory main.cpp)
