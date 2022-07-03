cmake_minimum_required(VERSION 3.0.0)
project(student_record VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(student_record src/main.cpp lib/STUDENT/STUDENT.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
