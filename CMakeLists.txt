cmake_minimum_required(VERSION 3.0.0)
project(LinuxAntivirus VERSION 0.1.0)

include_directories(src/antivirus/sources)

add_executable(main main.cc)
add_subdirectory(src/antivirus/sources)
target_link_libraries(main antivirus)

set_target_properties(main
    PROPERTIES 
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)


enable_testing()
add_executable(tester src/tests/tester.cpp)
add_test(Tester tester)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
