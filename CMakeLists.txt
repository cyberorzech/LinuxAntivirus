cmake_minimum_required(VERSION 3.16.0)
project(LinuxAntivirus VERSION 0.1.0)
set(CMAKE_CXX_STANDARD_20, CXX_STANDARD_REQUIRED ON)

include_directories(src/antivirus/sources)

add_executable(main main.cc)
add_subdirectory(src/antivirus/sources)
target_link_libraries(main antivirus)

# set_target_properties(main
#     PROPERTIES 
#         CXX_STANDARD 20
#         CXX_STANDARD_REQUIRED ON
# )
message("CMAKE_CXX17_STANDARD_COMPILE_OPTION = ${CMAKE_CXX20_STANDARD_COMPILE_OPTION}")
#message("CMAKE_CXX_STANDARD = ${")
set(CMAKE_CXX_FLAGS "--std=c++2a")
set(CMAKE_CXX_COMPILER, g++-9)
#set(CMAKE_CXX_COMP)

enable_testing()
add_executable(tester src/tests/tester.cpp)
add_test(Tester tester)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
